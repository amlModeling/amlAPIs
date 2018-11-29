from .caex import getEClassifier, eClassifiers
from .caex import name, nsURI, nsPrefix, eClass
from .caex import AttributeDataType, AttributeFamily, AttributeNameMapping, Attribute, AttributeLib, AttributeValueRequirement, CAEXBasicObject, CAEXFile, CAEXObject, ChangeMode, ChangeModeObject, DocumentRoot, ExternalInterface, ExternalReference, InstanceHierarchy, InterfaceClassLib, InterfaceClass, InterfaceFamily, InterfaceIDMapping, InternalElement, InternalLink, Mapping, NominalScaled, OrdinalScaled, RefSemantic, RoleClassLib, RoleClass, RoleFamily, RoleRequirements, SourceDocumentInformation, SupportedRoleClass, SystemUnitClassLib, SystemUnitClass, SystemUnitFamily, UnknownType, Copyright, Description, Revision, Version, AdditionalInformation
from . import caex

__all__ = ['AttributeDataType', 'AttributeFamily', 'AttributeNameMapping', 'Attribute', 'AttributeLib', 'AttributeValueRequirement', 'CAEXBasicObject', 'CAEXFile', 'CAEXObject', 'ChangeMode', 'ChangeModeObject', 'DocumentRoot', 'ExternalInterface', 'ExternalReference', 'InstanceHierarchy', 'InterfaceClassLib', 'InterfaceClass', 'InterfaceFamily', 'InterfaceIDMapping', 'InternalElement', 'InternalLink', 'Mapping', 'NominalScaled', 'OrdinalScaled', 'RefSemantic', 'RoleClassLib', 'RoleClass', 'RoleFamily', 'RoleRequirements', 'SourceDocumentInformation', 'SupportedRoleClass', 'SystemUnitClassLib', 'SystemUnitClass', 'SystemUnitFamily', 'UnknownType', 'Copyright', 'Description', 'Revision', 'Version', 'AdditionalInformation']

eSubpackages = []
eSuperPackage = None

# Non opposite EReferences
AttributeNameMapping.roleAttribute.eType = Attribute
AttributeNameMapping.systemUnitAttribute.eType = Attribute
Attribute.refSemantic.eType = RefSemantic
Attribute.constraint.eType = AttributeValueRequirement
Attribute.attribute.eType = Attribute
Attribute.referenceAttribute.eType = Attribute
AttributeLib.attributeType.eType = Attribute
AttributeValueRequirement.ordinalScaledType.eType = OrdinalScaled
AttributeValueRequirement.nominalScaledType.eType = NominalScaled
AttributeValueRequirement.unknownType.eType = UnknownType
CAEXBasicObject.description.eType = Description
CAEXBasicObject.version.eType = Version
CAEXBasicObject.revision.eType = Revision
CAEXBasicObject.copyright.eType = Copyright
CAEXBasicObject.additionalInformation.eType = AdditionalInformation
CAEXFile.sourceDocumentInformation.eType = SourceDocumentInformation
CAEXFile.externalReference.eType = ExternalReference
CAEXFile.instanceHierarchy.eType = InstanceHierarchy
CAEXFile.interfaceClassLib.eType = InterfaceClassLib
CAEXFile.roleClassLib.eType = RoleClassLib
CAEXFile.systemUnitClassLib.eType = SystemUnitClassLib
CAEXFile.attributeTypeLib.eType = AttributeLib
DocumentRoot.xMLNSPrefixMap.eType = EStringToStringMapEntry
DocumentRoot.xSISchemaLocation.eType = EStringToStringMapEntry
DocumentRoot.cAEXFile.eType = CAEXFile
InstanceHierarchy.internalElement.eType = InternalElement
InterfaceClassLib.interfaceClass.eType = InterfaceClass
InterfaceClass.attribute.eType = Attribute
InterfaceClass.baseClass.eType = InterfaceClass
InterfaceClass.interfaceClass.eType = InterfaceClass
InterfaceClass.externalInterface.eType = InterfaceClass
InterfaceIDMapping.roleInterface.eType = ExternalInterface
InterfaceIDMapping.systemUnitInterface.eType = ExternalInterface
InternalElement.roleRequirements.eType = RoleRequirements
InternalElement.baseSystemUnit.eType = SystemUnitClass
InternalLink.partnerSideA.eType = InterfaceClass
InternalLink.partnerSideB.eType = InterfaceClass
Mapping.attributeNameMapping.eType = AttributeNameMapping
Mapping.interfaceIDMapping.eType = InterfaceIDMapping
RoleClassLib.roleClass.eType = RoleClass
RoleClass.attribute.eType = Attribute
RoleClass.externalInterface.eType = ExternalInterface
RoleClass.baseClass.eType = RoleClass
RoleClass.roleClass.eType = RoleClass
RoleRequirements.attribute.eType = Attribute
RoleRequirements.externalInterface.eType = InterfaceClass
RoleRequirements.mappingObject.eType = Mapping
RoleRequirements.roleClass.eType = RoleClass
SupportedRoleClass.mappingObject.eType = Mapping
SupportedRoleClass.roleClass.eType = RoleClass
SystemUnitClassLib.systemUnitClass.eType = SystemUnitClass
SystemUnitClass.attribute.eType = Attribute
SystemUnitClass.externalInterface.eType = InterfaceClass
SystemUnitClass.internalElement.eType = InternalElement
SystemUnitClass.supportedRoleClass.eType = SupportedRoleClass
SystemUnitClass.internalLink.eType = InternalLink
SystemUnitClass.baseClass.eType = SystemUnitClass
SystemUnitClass.systemUnitClass.eType = SystemUnitClass


# Manage all other EClassifiers (EEnum, EDatatypes...)
otherClassifiers = [AttributeDataType, ChangeMode, ChangeModeObject]
for classif in otherClassifiers:
    eClassifiers[classif.name] = classif
    classif._container = caex

for classif in eClassifiers.values():
    eClass.eClassifiers.append(classif.eClass)

for subpack in eSubpackages:
    eClass.eSubpackages.append(subpack.eClass)
