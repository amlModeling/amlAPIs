from functools import partial
import pyecore.ecore as Ecore
from pyecore.ecore import *

name = 'anytype'
nsURI = 'http://caex/anytype'
nsPrefix = 'anytype'

eClass = EPackage(name=name, nsURI=nsURI, nsPrefix=nsPrefix)

eClassifiers = {}
getEClassifier = partial(Ecore.getEClassifier, searchspace=eClassifiers)




@abstract
class Element(EObject, metaclass=MetaEClass):
    name = EAttribute(eType=EString)
    value = EAttribute(eType=EString)

    def __init__(self, name=None, value=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if name is not None:
            self.name = name
        if value is not None:
            self.value = value


class GenericElement(Element):
    elementFeatureMap = EAttribute(eType=EFeatureMapEntry, upper=-1)
    attributeFeatureMap = EAttribute(eType=EFeatureMapEntry, upper=-1)
    nestedElements = EReference(upper=-1, containment=True)
    attributes = EReference(upper=-1, containment=True)

    def __init__(self, nestedElements=None, attributes=None, elementFeatureMap=None, attributeFeatureMap=None, **kwargs):
        super().__init__(**kwargs)
        if elementFeatureMap:
            self.elementFeatureMap.extend(elementFeatureMap)
        if attributeFeatureMap:
            self.attributeFeatureMap.extend(attributeFeatureMap)
        if nestedElements:
            self.nestedElements.extend(nestedElements)
        if attributes:
            self.attributes.extend(attributes)


class GenericAttribute(Element):

    def __init__(self, **kwargs):
        super().__init__(**kwargs)
