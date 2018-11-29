from .anytype import getEClassifier, eClassifiers
from .anytype import name, nsURI, nsPrefix, eClass
from .anytype import Element, GenericElement, GenericAttribute
from . import anytype

__all__ = ['Element', 'GenericElement', 'GenericAttribute']

eSubpackages = []
eSuperPackage = None

# Non opposite EReferences
GenericElement.nestedElements.eType = GenericElement
GenericElement.attributes.eType = GenericAttribute


# Manage all other EClassifiers (EEnum, EDatatypes...)
otherClassifiers = []
for classif in otherClassifiers:
    eClassifiers[classif.name] = classif
    classif._container = anytype

for classif in eClassifiers.values():
    eClass.eClassifiers.append(classif.eClass)

for subpack in eSubpackages:
    eClass.eSubpackages.append(subpack.eClass)
