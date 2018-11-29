from functools import partial
import pyecore.ecore as Ecore
from pyecore.ecore import *
from anytype import Element
from anytype import GenericElement

name = 'caex'
nsURI = 'http://www.dke.de/CAEX/300'
nsPrefix = 'caex'

eClass = EPackage(name=name, nsURI=nsURI, nsPrefix=nsPrefix)

eClassifiers = {}
getEClassifier = partial(Ecore.getEClassifier, searchspace=eClassifiers)


AttributeDataType = EDataType('AttributeDataType', instanceClassName='java.lang.String')
ChangeMode = EEnum('ChangeMode', literals=['state', 'create', 'delete', 'change'])  # noqa
ChangeModeObject = EDataType('ChangeModeObject', instanceClassName='org.eclipse.emf.common.util.Enumerator')


class CAEXBasicObject(EObject, metaclass=MetaEClass):
    """CAEX basis object that comprises a basic set of attributes and header information which exist for all CAEX elements."""
    changeMode = EAttribute(eType=ChangeMode)
    description = EReference(containment=True)
    version = EReference(containment=True)
    revision = EReference(upper=-1, containment=True)
    copyright = EReference(containment=True)
    additionalInformation = EReference(upper=-1, containment=True)

    def __init__(self, changeMode=None, description=None, version=None, revision=None, copyright=None, additionalInformation=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if changeMode is not None:
            self.changeMode = changeMode
        if description is not None:
            self.description = description
        if version is not None:
            self.version = version
        if revision:
            self.revision.extend(revision)
        if copyright is not None:
            self.copyright = copyright
        if additionalInformation:
            self.additionalInformation.extend(additionalInformation)


class DocumentRoot(EObject, metaclass=MetaEClass):
    mixed = EAttribute(eType=EFeatureMapEntry, upper=-1)
    xMLNSPrefixMap = EReference(upper=-1, containment=True)
    xSISchemaLocation = EReference(upper=-1, containment=True)
    cAEXFile = EReference(containment=True)

    def __init__(self, mixed=None, xMLNSPrefixMap=None, xSISchemaLocation=None, cAEXFile=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if mixed:
            self.mixed.extend(mixed)
        if xMLNSPrefixMap:
            self.xMLNSPrefixMap.extend(xMLNSPrefixMap)
        if xSISchemaLocation:
            self.xSISchemaLocation.extend(xSISchemaLocation)
        if cAEXFile:
            self.cAEXFile.extend(cAEXFile)


class NominalScaled(EObject, metaclass=MetaEClass):
    requiredValue = EAttribute(eType=EString, upper=-1)

    def __init__(self, requiredValue=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if requiredValue:
            self.requiredValue.extend(requiredValue)


class OrdinalScaled(EObject, metaclass=MetaEClass):
    requiredMaxValue = EAttribute(eType=EString)
    requiredValue = EAttribute(eType=EString)
    requiredMinValue = EAttribute(eType=EString)

    def __init__(self, requiredMaxValue=None, requiredValue=None, requiredMinValue=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if requiredMaxValue is not None:
            self.requiredMaxValue = requiredMaxValue
        if requiredValue is not None:
            self.requiredValue = requiredValue
        if requiredMinValue is not None:
            self.requiredMinValue = requiredMinValue


class SourceDocumentInformation(EObject, metaclass=MetaEClass):
    """Defines a structure to model information about the data source of the present CAEX document."""
    lastWritingDateTime = EAttribute(eType=DateTime)
    originID = EAttribute(eType=EString)
    originName = EAttribute(eType=EString)
    originProjectID = EAttribute(eType=EString)
    originProjectTitle = EAttribute(eType=EString)
    originRelease = EAttribute(eType=EString)
    originVendor = EAttribute(eType=EString)
    originVendorURL = EAttribute(eType=EString)
    originVersion = EAttribute(eType=EString)

    def __init__(self, lastWritingDateTime=None, originID=None, originName=None, originProjectID=None, originProjectTitle=None, originRelease=None, originVendor=None, originVendorURL=None, originVersion=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if lastWritingDateTime is not None:
            self.lastWritingDateTime = lastWritingDateTime
        if originID is not None:
            self.originID = originID
        if originName is not None:
            self.originName = originName
        if originProjectID is not None:
            self.originProjectID = originProjectID
        if originProjectTitle is not None:
            self.originProjectTitle = originProjectTitle
        if originRelease is not None:
            self.originRelease = originRelease
        if originVendor is not None:
            self.originVendor = originVendor
        if originVendorURL is not None:
            self.originVendorURL = originVendorURL
        if originVersion is not None:
            self.originVersion = originVersion


class UnknownType(EObject, metaclass=MetaEClass):
    requirements = EAttribute(eType=EString)

    def __init__(self, requirements=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if requirements is not None:
            self.requirements = requirements


class Copyright(EObject, metaclass=MetaEClass):
    value = EAttribute(eType=EString)
    changeMode = EAttribute(eType=ChangeMode)

    def __init__(self, value=None, changeMode=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if value is not None:
            self.value = value
        if changeMode is not None:
            self.changeMode = changeMode


class Description(EObject, metaclass=MetaEClass):
    value = EAttribute(eType=EString)
    changeMode = EAttribute(eType=ChangeMode)

    def __init__(self, value=None, changeMode=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if value is not None:
            self.value = value
        if changeMode is not None:
            self.changeMode = changeMode


class Version(EObject, metaclass=MetaEClass):
    value = EAttribute(eType=EString)
    changeMode = EAttribute(eType=ChangeMode)

    def __init__(self, value=None, changeMode=None, **kwargs):
        if kwargs:
            raise AttributeError('unexpected arguments: {}'.format(kwargs))

        super().__init__()
        if value is not None:
            self.value = value
        if changeMode is not None:
            self.changeMode = changeMode


class AttributeNameMapping(CAEXBasicObject):
    roleAttributeName = EAttribute(eType=EString)
    systemUnitAttributeName = EAttribute(eType=EString)
    roleAttribute = EReference()
    systemUnitAttribute = EReference()

    def __init__(self, roleAttributeName=None, systemUnitAttributeName=None, roleAttribute=None, systemUnitAttribute=None, **kwargs):
        super().__init__(**kwargs)
        if roleAttributeName is not None:
            self.roleAttributeName = roleAttributeName
        if systemUnitAttributeName is not None:
            self.systemUnitAttributeName = systemUnitAttributeName
        if roleAttribute is not None:
            self.roleAttribute = roleAttribute
        if systemUnitAttribute is not None:
            self.systemUnitAttribute = systemUnitAttribute


class AttributeValueRequirement(CAEXBasicObject):
    """Defines base structures for definition of value requirements of an attribute."""
    name = EAttribute(eType=EString)
    ordinalScaledType = EReference(containment=True)
    nominalScaledType = EReference(containment=True)
    unknownType = EReference(containment=True)

    def __init__(self, ordinalScaledType=None, nominalScaledType=None, unknownType=None, name=None, **kwargs):
        super().__init__(**kwargs)
        if name is not None:
            self.name = name
        if ordinalScaledType is not None:
            self.ordinalScaledType = ordinalScaledType
        if nominalScaledType is not None:
            self.nominalScaledType = nominalScaledType
        if unknownType is not None:
            self.unknownType = unknownType


class CAEXFile(CAEXBasicObject):
    superiorStandardVersion = EAttribute(eType=EString, upper=-1)
    fileName = EAttribute(eType=EString)
    schemaVersion = EAttribute(eType=EString)
    sourceDocumentInformation = EReference(upper=-1, containment=True)
    externalReference = EReference(upper=-1, containment=True)
    instanceHierarchy = EReference(upper=-1, containment=True)
    interfaceClassLib = EReference(upper=-1, containment=True)
    roleClassLib = EReference(upper=-1, containment=True)
    systemUnitClassLib = EReference(upper=-1, containment=True)
    attributeTypeLib = EReference(upper=-1, containment=True)

    def __init__(self, superiorStandardVersion=None, sourceDocumentInformation=None, externalReference=None, instanceHierarchy=None, interfaceClassLib=None, roleClassLib=None, systemUnitClassLib=None, attributeTypeLib=None, fileName=None, schemaVersion=None, **kwargs):
        super().__init__(**kwargs)
        if superiorStandardVersion:
            self.superiorStandardVersion.extend(superiorStandardVersion)
        if fileName is not None:
            self.fileName = fileName
        if schemaVersion is not None:
            self.schemaVersion = schemaVersion
        if sourceDocumentInformation:
            self.sourceDocumentInformation.extend(sourceDocumentInformation)
        if externalReference:
            self.externalReference.extend(externalReference)
        if instanceHierarchy:
            self.instanceHierarchy.extend(instanceHierarchy)
        if interfaceClassLib:
            self.interfaceClassLib.extend(interfaceClassLib)
        if roleClassLib:
            self.roleClassLib.extend(roleClassLib)
        if systemUnitClassLib:
            self.systemUnitClassLib.extend(systemUnitClassLib)
        if attributeTypeLib:
            self.attributeTypeLib.extend(attributeTypeLib)


class CAEXObject(CAEXBasicObject):
    """CAEX basis object derived from CAEXBasicObject, augmented by 
Name (required) and ID (optional)."""
    iD = EAttribute(eType=EString)
    name = EAttribute(eType=EString)

    def __init__(self, iD=None, name=None, **kwargs):
        super().__init__(**kwargs)
        if iD is not None:
            self.iD = iD
        if name is not None:
            self.name = name


class ExternalReference(CAEXBasicObject):
    alias = EAttribute(eType=EString)
    path = EAttribute(eType=EString)

    def __init__(self, alias=None, path=None, **kwargs):
        super().__init__(**kwargs)
        if alias is not None:
            self.alias = alias
        if path is not None:
            self.path = path


class InterfaceIDMapping(CAEXBasicObject):
    roleInterfaceID = EAttribute(eType=EString)
    systemUnitInterfaceID = EAttribute(eType=EString)
    roleInterface = EReference()
    systemUnitInterface = EReference()

    def __init__(self, roleInterfaceID=None, systemUnitInterfaceID=None, roleInterface=None, systemUnitInterface=None, **kwargs):
        super().__init__(**kwargs)
        if roleInterfaceID is not None:
            self.roleInterfaceID = roleInterfaceID
        if systemUnitInterfaceID is not None:
            self.systemUnitInterfaceID = systemUnitInterfaceID
        if roleInterface is not None:
            self.roleInterface = roleInterface
        if systemUnitInterface is not None:
            self.systemUnitInterface = systemUnitInterface


class Mapping(CAEXBasicObject):
    """Base element for AttributeNameMapping and InterfaceIDMapping."""
    attributeNameMapping = EReference(upper=-1, containment=True)
    interfaceIDMapping = EReference(upper=-1, containment=True)

    def __init__(self, attributeNameMapping=None, interfaceIDMapping=None, **kwargs):
        super().__init__(**kwargs)
        if attributeNameMapping:
            self.attributeNameMapping.extend(attributeNameMapping)
        if interfaceIDMapping:
            self.interfaceIDMapping.extend(interfaceIDMapping)


class RefSemantic(CAEXBasicObject):
    correspondingAttributePath = EAttribute(eType=EString)

    def __init__(self, correspondingAttributePath=None, **kwargs):
        super().__init__(**kwargs)
        if correspondingAttributePath is not None:
            self.correspondingAttributePath = correspondingAttributePath


class RoleRequirements(CAEXBasicObject):
    refBaseRoleClassPath = EAttribute(eType=EString)
    attribute = EReference(upper=-1, containment=True)
    externalInterface = EReference(upper=-1, containment=True)
    mappingObject = EReference(containment=True)
    roleClass = EReference()

    def __init__(self, attribute=None, externalInterface=None, mappingObject=None, roleClass=None, refBaseRoleClassPath=None, **kwargs):
        super().__init__(**kwargs)
        if refBaseRoleClassPath is not None:
            self.refBaseRoleClassPath = refBaseRoleClassPath
        if attribute:
            self.attribute.extend(attribute)
        if externalInterface:
            self.externalInterface.extend(externalInterface)
        if mappingObject is not None:
            self.mappingObject = mappingObject
        if roleClass is not None:
            self.roleClass = roleClass


class SupportedRoleClass(CAEXBasicObject):
    refRoleClassPath = EAttribute(eType=EString)
    mappingObject = EReference(containment=True)
    roleClass = EReference()

    def __init__(self, mappingObject=None, refRoleClassPath=None, roleClass=None, **kwargs):
        super().__init__(**kwargs)
        if refRoleClassPath is not None:
            self.refRoleClassPath = refRoleClassPath
        if mappingObject is not None:
            self.mappingObject = mappingObject
        if roleClass is not None:
            self.roleClass = roleClass


class Revision(CAEXBasicObject):
    revisionDate = EAttribute(eType=DateTime)
    oldVersion = EAttribute(eType=EString)
    newVersion = EAttribute(eType=EString)
    authorName = EAttribute(eType=EString)
    comment = EAttribute(eType=EString)

    def __init__(self, revisionDate=None, oldVersion=None, newVersion=None, authorName=None, comment=None, **kwargs):
        super().__init__(**kwargs)
        if revisionDate is not None:
            self.revisionDate = revisionDate
        if oldVersion is not None:
            self.oldVersion = oldVersion
        if newVersion is not None:
            self.newVersion = newVersion
        if authorName is not None:
            self.authorName = authorName
        if comment is not None:
            self.comment = comment


class Attribute(CAEXObject):
    """Defines base structures for attribute definitions."""
    defaultValue = EAttribute(eType=EString)
    value = EAttribute(eType=EString)
    attributeDataType = EAttribute(eType=AttributeDataType)
    refAttributeType = EAttribute(eType=EString)
    unit = EAttribute(eType=EString)
    refSemantic = EReference(upper=-1, containment=True)
    constraint = EReference(upper=-1, containment=True)
    attribute = EReference(upper=-1, containment=True)
    referenceAttribute = EReference()

    def __init__(self, defaultValue=None, value=None, refSemantic=None, constraint=None, attribute=None, attributeDataType=None, refAttributeType=None, unit=None, referenceAttribute=None, **kwargs):
        super().__init__(**kwargs)
        if defaultValue is not None:
            self.defaultValue = defaultValue
        if value is not None:
            self.value = value
        if attributeDataType is not None:
            self.attributeDataType = attributeDataType
        if refAttributeType is not None:
            self.refAttributeType = refAttributeType
        if unit is not None:
            self.unit = unit
        if refSemantic:
            self.refSemantic.extend(refSemantic)
        if constraint:
            self.constraint.extend(constraint)
        if attribute:
            self.attribute.extend(attribute)
        if referenceAttribute is not None:
            self.referenceAttribute = referenceAttribute


class AttributeLib(CAEXObject):
    attributeType = EReference(upper=-1, containment=True)

    def __init__(self, attributeType=None, **kwargs):
        super().__init__(**kwargs)
        if attributeType:
            self.attributeType.extend(attributeType)


class InstanceHierarchy(CAEXObject):
    internalElement = EReference(upper=-1, containment=True)

    def __init__(self, internalElement=None, **kwargs):
        super().__init__(**kwargs)
        if internalElement:
            self.internalElement.extend(internalElement)


class InterfaceClassLib(CAEXObject):
    interfaceClass = EReference(upper=-1, containment=True)

    def __init__(self, interfaceClass=None, **kwargs):
        super().__init__(**kwargs)
        if interfaceClass:
            self.interfaceClass.extend(interfaceClass)


class InterfaceClass(CAEXObject):
    """Shall be used for InterfaceClass definition, provides base structures for an interface class definition."""
    refBaseClassPath = EAttribute(eType=EString)
    attribute = EReference(upper=-1, containment=True)
    baseClass = EReference()
    interfaceClass = EReference(upper=-1, containment=True)
    externalInterface = EReference(upper=-1, containment=True)

    def __init__(self, attribute=None, refBaseClassPath=None, baseClass=None, interfaceClass=None, externalInterface=None, **kwargs):
        super().__init__(**kwargs)
        if refBaseClassPath is not None:
            self.refBaseClassPath = refBaseClassPath
        if attribute:
            self.attribute.extend(attribute)
        if baseClass is not None:
            self.baseClass = baseClass
        if interfaceClass:
            self.interfaceClass.extend(interfaceClass)
        if externalInterface:
            self.externalInterface.extend(externalInterface)


class InternalLink(CAEXObject):
    refPartnerSideA = EAttribute(eType=EString)
    refPartnerSideB = EAttribute(eType=EString)
    partnerSideA = EReference()
    partnerSideB = EReference()

    def __init__(self, refPartnerSideA=None, refPartnerSideB=None, partnerSideA=None, partnerSideB=None, **kwargs):
        super().__init__(**kwargs)
        if refPartnerSideA is not None:
            self.refPartnerSideA = refPartnerSideA
        if refPartnerSideB is not None:
            self.refPartnerSideB = refPartnerSideB
        if partnerSideA is not None:
            self.partnerSideA = partnerSideA
        if partnerSideB is not None:
            self.partnerSideB = partnerSideB


class RoleClassLib(CAEXObject):
    roleClass = EReference(upper=-1, containment=True)

    def __init__(self, roleClass=None, **kwargs):
        super().__init__(**kwargs)
        if roleClass:
            self.roleClass.extend(roleClass)


class RoleClass(CAEXObject):
    """Shall be used for RoleClass definition, provides base structures for a role class definition."""
    refBaseClassPath = EAttribute(eType=EString)
    attribute = EReference(upper=-1, containment=True)
    externalInterface = EReference(upper=-1, containment=True)
    baseClass = EReference()
    roleClass = EReference(upper=-1, containment=True)

    def __init__(self, attribute=None, externalInterface=None, refBaseClassPath=None, baseClass=None, roleClass=None, **kwargs):
        super().__init__(**kwargs)
        if refBaseClassPath is not None:
            self.refBaseClassPath = refBaseClassPath
        if attribute:
            self.attribute.extend(attribute)
        if externalInterface:
            self.externalInterface.extend(externalInterface)
        if baseClass is not None:
            self.baseClass = baseClass
        if roleClass:
            self.roleClass.extend(roleClass)


class SystemUnitClassLib(CAEXObject):
    systemUnitClass = EReference(upper=-1, containment=True)

    def __init__(self, systemUnitClass=None, **kwargs):
        super().__init__(**kwargs)
        if systemUnitClass:
            self.systemUnitClass.extend(systemUnitClass)


class SystemUnitClass(CAEXObject):
    """Defines base structures for a SystemUnit class definition."""
    refBaseClassPath = EAttribute(eType=EString)
    attribute = EReference(upper=-1, containment=True)
    externalInterface = EReference(upper=-1, containment=True)
    internalElement = EReference(upper=-1, containment=True)
    supportedRoleClass = EReference(upper=-1, containment=True)
    internalLink = EReference(upper=-1, containment=True)
    baseClass = EReference()
    systemUnitClass = EReference(upper=-1, containment=True)

    def __init__(self, attribute=None, externalInterface=None, internalElement=None, supportedRoleClass=None, internalLink=None, baseClass=None, systemUnitClass=None, refBaseClassPath=None, **kwargs):
        super().__init__(**kwargs)
        if refBaseClassPath is not None:
            self.refBaseClassPath = refBaseClassPath
        if attribute:
            self.attribute.extend(attribute)
        if externalInterface:
            self.externalInterface.extend(externalInterface)
        if internalElement:
            self.internalElement.extend(internalElement)
        if supportedRoleClass:
            self.supportedRoleClass.extend(supportedRoleClass)
        if internalLink:
            self.internalLink.extend(internalLink)
        if baseClass is not None:
            self.baseClass = baseClass
        if systemUnitClass:
            self.systemUnitClass.extend(systemUnitClass)


class AdditionalInformation(GenericElement):

    def __init__(self, **kwargs):
        super().__init__(**kwargs)


class AttributeFamily(Attribute):
    """Defines base structures for attribute type definitions."""

    def __init__(self, **kwargs):
        super().__init__(**kwargs)


class ExternalInterface(InterfaceClass):

    def __init__(self, **kwargs):
        super().__init__(**kwargs)


class InterfaceFamily(InterfaceClass):
    """Defines base structures for a hierarchical InterfaceClass tree. The hierarchical structure of an interface library has organizational character only.  """

    def __init__(self, **kwargs):
        super().__init__(**kwargs)


class InternalElement(SystemUnitClass):
    """Defines base structures for a hierarchical object instance. The instance maybe part of the InstanceHierarchy or a SystemUnitClass."""
    refBaseSystemUnitPath = EAttribute(eType=EString)
    roleRequirements = EReference(upper=-1, containment=True)
    baseSystemUnit = EReference()

    def __init__(self, roleRequirements=None, refBaseSystemUnitPath=None, baseSystemUnit=None, **kwargs):
        super().__init__(**kwargs)
        if refBaseSystemUnitPath is not None:
            self.refBaseSystemUnitPath = refBaseSystemUnitPath
        if roleRequirements:
            self.roleRequirements.extend(roleRequirements)
        if baseSystemUnit is not None:
            self.baseSystemUnit = baseSystemUnit


class RoleFamily(RoleClass):
    """Defines base structures for a hierarchical RoleClass tree. The hierarchical structure of a role library has organizational character only. """

    def __init__(self, **kwargs):
        super().__init__(**kwargs)


class SystemUnitFamily(SystemUnitClass):
    """Defines base structures for a hierarchical SystemUnitClass tree. The hierarchical structure of a SystemUnit library has organizational character only.  """

    def __init__(self, **kwargs):
        super().__init__(**kwargs)
