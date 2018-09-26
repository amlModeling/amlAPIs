// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CaexPackage.hpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#ifndef _CAEXPACKAGE_HPP
#define _CAEXPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <caex_forward.hpp>

#include <anytype/AnytypePackage.hpp>

namespace caex
{

    class CaexPackage: public virtual ::ecore::EPackage
    {
    public:

        static CaexPackage_ptr _instance();

        // IDs for classifiers

        static const int ADDITIONALINFORMATION = 0;

        static const int ATTRIBUTE = 1;

        static const int ATTRIBUTEDATATYPE = 2;

        static const int ATTRIBUTEFAMILY = 3;

        static const int ATTRIBUTELIB = 4;

        static const int ATTRIBUTENAMEMAPPING = 5;

        static const int ATTRIBUTEVALUEREQUIREMENT = 6;

        static const int CAEXBASICOBJECT = 7;

        static const int CAEXFILE = 8;

        static const int CAEXOBJECT = 9;

        static const int CHANGEMODE = 10;

        static const int CHANGEMODEOBJECT = 11;

        static const int COPYRIGHT = 12;

        static const int DESCRIPTION = 13;

        static const int DOCUMENTROOT = 14;

        static const int EXTERNALINTERFACE = 15;

        static const int EXTERNALREFERENCE = 16;

        static const int INSTANCEHIERARCHY = 17;

        static const int INTERFACECLASS = 18;

        static const int INTERFACECLASSLIB = 19;

        static const int INTERFACEFAMILY = 20;

        static const int INTERFACEIDMAPPING = 21;

        static const int INTERNALELEMENT = 22;

        static const int INTERNALLINK = 23;

        static const int MAPPING = 24;

        static const int NOMINALSCALED = 25;

        static const int ORDINALSCALED = 26;

        static const int REFSEMANTIC = 27;

        static const int REVISION = 28;

        static const int ROLECLASS = 29;

        static const int ROLECLASSLIB = 30;

        static const int ROLEFAMILY = 31;

        static const int ROLEREQUIREMENTS = 32;

        static const int SOURCEDOCUMENTINFORMATION = 33;

        static const int SUPPORTEDROLECLASS = 34;

        static const int SYSTEMUNITCLASS = 35;

        static const int SYSTEMUNITCLASSLIB = 36;

        static const int SYSTEMUNITFAMILY = 37;

        static const int UNKNOWNTYPE = 38;

        static const int VERSION = 39;

        static const int ATTRIBUTENAMEMAPPING__ROLEATTRIBUTENAME = 0;

        static const int ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTENAME = 1;

        static const int ATTRIBUTENAMEMAPPING__ROLEATTRIBUTE = 2;

        static const int ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTE = 3;

        static const int ATTRIBUTE__DEFAULTVALUE = 4;

        static const int ATTRIBUTE__VALUE = 5;

        static const int ATTRIBUTE__REFSEMANTIC = 6;

        static const int ATTRIBUTE__CONSTRAINT = 7;

        static const int ATTRIBUTE__ATTRIBUTE = 8;

        static const int ATTRIBUTE__ATTRIBUTEDATATYPE = 9;

        static const int ATTRIBUTE__REFATTRIBUTETYPE = 10;

        static const int ATTRIBUTE__UNIT = 11;

        static const int ATTRIBUTE__REFERENCEATTRIBUTE = 12;

        static const int ATTRIBUTELIB__ATTRIBUTETYPE = 13;

        static const int ATTRIBUTEVALUEREQUIREMENT__ORDINALSCALEDTYPE = 14;

        static const int ATTRIBUTEVALUEREQUIREMENT__NOMINALSCALEDTYPE = 15;

        static const int ATTRIBUTEVALUEREQUIREMENT__UNKNOWNTYPE = 16;

        static const int ATTRIBUTEVALUEREQUIREMENT__NAME = 17;

        static const int CAEXBASICOBJECT__CHANGEMODE = 18;

        static const int CAEXBASICOBJECT__DESCRIPTION = 19;

        static const int CAEXBASICOBJECT__VERSION = 20;

        static const int CAEXBASICOBJECT__REVISION = 21;

        static const int CAEXBASICOBJECT__COPYRIGHT = 22;

        static const int CAEXBASICOBJECT__ADDITIONALINFORMATION = 23;

        static const int CAEXFILE__SUPERIORSTANDARDVERSION = 24;

        static const int CAEXFILE__SOURCEDOCUMENTINFORMATION = 25;

        static const int CAEXFILE__EXTERNALREFERENCE = 26;

        static const int CAEXFILE__INSTANCEHIERARCHY = 27;

        static const int CAEXFILE__INTERFACECLASSLIB = 28;

        static const int CAEXFILE__ROLECLASSLIB = 29;

        static const int CAEXFILE__SYSTEMUNITCLASSLIB = 30;

        static const int CAEXFILE__ATTRIBUTETYPELIB = 31;

        static const int CAEXFILE__FILENAME = 32;

        static const int CAEXFILE__SCHEMAVERSION = 33;

        static const int CAEXOBJECT__ID = 34;

        static const int CAEXOBJECT__NAME = 35;

        static const int DOCUMENTROOT__MIXED = 36;

        static const int DOCUMENTROOT__XMLNSPREFIXMAP = 37;

        static const int DOCUMENTROOT__XSISCHEMALOCATION = 38;

        static const int DOCUMENTROOT__CAEXFILE = 39;

        static const int EXTERNALREFERENCE__ALIAS = 40;

        static const int EXTERNALREFERENCE__PATH = 41;

        static const int INSTANCEHIERARCHY__INTERNALELEMENT = 42;

        static const int INTERFACECLASSLIB__INTERFACECLASS = 43;

        static const int INTERFACECLASS__ATTRIBUTE = 44;

        static const int INTERFACECLASS__REFBASECLASSPATH = 45;

        static const int INTERFACECLASS__BASECLASS = 46;

        static const int INTERFACECLASS__INTERFACECLASS = 47;

        static const int INTERFACECLASS__EXTERNALINTERFACE = 48;

        static const int INTERFACEIDMAPPING__ROLEINTERFACEID = 49;

        static const int INTERFACEIDMAPPING__SYSTEMUNITINTERFACEID = 50;

        static const int INTERFACEIDMAPPING__ROLEINTERFACE = 51;

        static const int INTERFACEIDMAPPING__SYSTEMUNITINTERFACE = 52;

        static const int INTERNALELEMENT__ROLEREQUIREMENTS = 53;

        static const int INTERNALELEMENT__REFBASESYSTEMUNITPATH = 54;

        static const int INTERNALELEMENT__BASESYSTEMUNIT = 55;

        static const int INTERNALLINK__REFPARTNERSIDEA = 56;

        static const int INTERNALLINK__REFPARTNERSIDEB = 57;

        static const int INTERNALLINK__PARTNERSIDEA = 58;

        static const int INTERNALLINK__PARTNERSIDEB = 59;

        static const int MAPPING__ATTRIBUTENAMEMAPPING = 60;

        static const int MAPPING__INTERFACEIDMAPPING = 61;

        static const int NOMINALSCALED__REQUIREDVALUE = 62;

        static const int ORDINALSCALED__REQUIREDMAXVALUE = 63;

        static const int ORDINALSCALED__REQUIREDVALUE = 64;

        static const int ORDINALSCALED__REQUIREDMINVALUE = 65;

        static const int REFSEMANTIC__CORRESPONDINGATTRIBUTEPATH = 66;

        static const int ROLECLASSLIB__ROLECLASS = 67;

        static const int ROLECLASS__ATTRIBUTE = 68;

        static const int ROLECLASS__EXTERNALINTERFACE = 69;

        static const int ROLECLASS__REFBASECLASSPATH = 70;

        static const int ROLECLASS__BASECLASS = 71;

        static const int ROLECLASS__ROLECLASS = 72;

        static const int ROLEREQUIREMENTS__ATTRIBUTE = 73;

        static const int ROLEREQUIREMENTS__EXTERNALINTERFACE = 74;

        static const int ROLEREQUIREMENTS__MAPPINGOBJECT = 75;

        static const int ROLEREQUIREMENTS__ROLECLASS = 76;

        static const int ROLEREQUIREMENTS__REFBASEROLECLASSPATH = 77;

        static const int SOURCEDOCUMENTINFORMATION__LASTWRITINGDATETIME = 78;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINID = 79;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINNAME = 80;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINPROJECTID = 81;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINPROJECTTITLE = 82;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINRELEASE = 83;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINVENDOR = 84;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINVENDORURL = 85;

        static const int SOURCEDOCUMENTINFORMATION__ORIGINVERSION = 86;

        static const int SUPPORTEDROLECLASS__MAPPINGOBJECT = 87;

        static const int SUPPORTEDROLECLASS__REFROLECLASSPATH = 88;

        static const int SUPPORTEDROLECLASS__ROLECLASS = 89;

        static const int SYSTEMUNITCLASSLIB__SYSTEMUNITCLASS = 90;

        static const int SYSTEMUNITCLASS__ATTRIBUTE = 91;

        static const int SYSTEMUNITCLASS__EXTERNALINTERFACE = 92;

        static const int SYSTEMUNITCLASS__INTERNALELEMENT = 93;

        static const int SYSTEMUNITCLASS__SUPPORTEDROLECLASS = 94;

        static const int SYSTEMUNITCLASS__INTERNALLINK = 95;

        static const int SYSTEMUNITCLASS__BASECLASS = 96;

        static const int SYSTEMUNITCLASS__SYSTEMUNITCLASS = 97;

        static const int SYSTEMUNITCLASS__REFBASECLASSPATH = 98;

        static const int UNKNOWNTYPE__REQUIREMENTS = 99;

        static const int COPYRIGHT__VALUE = 100;

        static const int COPYRIGHT__CHANGEMODE = 101;

        static const int DESCRIPTION__VALUE = 102;

        static const int DESCRIPTION__CHANGEMODE = 103;

        static const int REVISION__REVISIONDATE = 104;

        static const int REVISION__OLDVERSION = 105;

        static const int REVISION__NEWVERSION = 106;

        static const int REVISION__AUTHORNAME = 107;

        static const int REVISION__COMMENT = 108;

        static const int VERSION__VALUE = 109;

        static const int VERSION__CHANGEMODE = 110;

        // IDs for classifiers for class AdditionalInformation 

        static const int ADDITIONALINFORMATION__NAME =
                ::anytype::AnytypePackage::ELEMENT__NAME;

        static const int ADDITIONALINFORMATION__VALUE =
                ::anytype::AnytypePackage::ELEMENT__VALUE;

        static const int ADDITIONALINFORMATION__NESTEDELEMENTS =
                ::anytype::AnytypePackage::GENERICELEMENT__NESTEDELEMENTS;

        static const int ADDITIONALINFORMATION__ATTRIBUTES =
                ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTES;

        static const int ADDITIONALINFORMATION__ELEMENTFEATUREMAP =
                ::anytype::AnytypePackage::GENERICELEMENT__ELEMENTFEATUREMAP;

        static const int ADDITIONALINFORMATION__ATTRIBUTEFEATUREMAP =
                ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTEFEATUREMAP;

        // IDs for classifiers for class Attribute 

        static const int ATTRIBUTE__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int ATTRIBUTE__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int ATTRIBUTE__VERSION = CAEXBASICOBJECT__VERSION;

        static const int ATTRIBUTE__REVISION = CAEXBASICOBJECT__REVISION;

        static const int ATTRIBUTE__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int ATTRIBUTE__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int ATTRIBUTE__ID = CAEXOBJECT__ID;

        static const int ATTRIBUTE__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class AttributeFamily 

        static const int ATTRIBUTEFAMILY__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int ATTRIBUTEFAMILY__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int ATTRIBUTEFAMILY__VERSION = CAEXBASICOBJECT__VERSION;

        static const int ATTRIBUTEFAMILY__REVISION = CAEXBASICOBJECT__REVISION;

        static const int ATTRIBUTEFAMILY__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int ATTRIBUTEFAMILY__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int ATTRIBUTEFAMILY__ID = CAEXOBJECT__ID;

        static const int ATTRIBUTEFAMILY__NAME = CAEXOBJECT__NAME;

        static const int ATTRIBUTEFAMILY__DEFAULTVALUE = ATTRIBUTE__DEFAULTVALUE;

        static const int ATTRIBUTEFAMILY__VALUE = ATTRIBUTE__VALUE;

        static const int ATTRIBUTEFAMILY__REFSEMANTIC = ATTRIBUTE__REFSEMANTIC;

        static const int ATTRIBUTEFAMILY__CONSTRAINT = ATTRIBUTE__CONSTRAINT;

        static const int ATTRIBUTEFAMILY__ATTRIBUTE = ATTRIBUTE__ATTRIBUTE;

        static const int ATTRIBUTEFAMILY__ATTRIBUTEDATATYPE =
                ATTRIBUTE__ATTRIBUTEDATATYPE;

        static const int ATTRIBUTEFAMILY__REFATTRIBUTETYPE =
                ATTRIBUTE__REFATTRIBUTETYPE;

        static const int ATTRIBUTEFAMILY__UNIT = ATTRIBUTE__UNIT;

        static const int ATTRIBUTEFAMILY__REFERENCEATTRIBUTE =
                ATTRIBUTE__REFERENCEATTRIBUTE;

        // IDs for classifiers for class AttributeLib 

        static const int ATTRIBUTELIB__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int ATTRIBUTELIB__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int ATTRIBUTELIB__VERSION = CAEXBASICOBJECT__VERSION;

        static const int ATTRIBUTELIB__REVISION = CAEXBASICOBJECT__REVISION;

        static const int ATTRIBUTELIB__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int ATTRIBUTELIB__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int ATTRIBUTELIB__ID = CAEXOBJECT__ID;

        static const int ATTRIBUTELIB__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class AttributeNameMapping 

        static const int ATTRIBUTENAMEMAPPING__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int ATTRIBUTENAMEMAPPING__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int ATTRIBUTENAMEMAPPING__VERSION =
                CAEXBASICOBJECT__VERSION;

        static const int ATTRIBUTENAMEMAPPING__REVISION =
                CAEXBASICOBJECT__REVISION;

        static const int ATTRIBUTENAMEMAPPING__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int ATTRIBUTENAMEMAPPING__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class AttributeValueRequirement 

        static const int ATTRIBUTEVALUEREQUIREMENT__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int ATTRIBUTEVALUEREQUIREMENT__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int ATTRIBUTEVALUEREQUIREMENT__VERSION =
                CAEXBASICOBJECT__VERSION;

        static const int ATTRIBUTEVALUEREQUIREMENT__REVISION =
                CAEXBASICOBJECT__REVISION;

        static const int ATTRIBUTEVALUEREQUIREMENT__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int ATTRIBUTEVALUEREQUIREMENT__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class CAEXBasicObject 

        // IDs for classifiers for class CAEXFile 

        static const int CAEXFILE__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int CAEXFILE__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int CAEXFILE__VERSION = CAEXBASICOBJECT__VERSION;

        static const int CAEXFILE__REVISION = CAEXBASICOBJECT__REVISION;

        static const int CAEXFILE__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int CAEXFILE__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class CAEXObject 

        static const int CAEXOBJECT__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int CAEXOBJECT__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int CAEXOBJECT__VERSION = CAEXBASICOBJECT__VERSION;

        static const int CAEXOBJECT__REVISION = CAEXBASICOBJECT__REVISION;

        static const int CAEXOBJECT__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int CAEXOBJECT__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class Copyright 

        // IDs for classifiers for class Description 

        // IDs for classifiers for class DocumentRoot 

        // IDs for classifiers for class ExternalInterface 

        static const int EXTERNALINTERFACE__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int EXTERNALINTERFACE__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int EXTERNALINTERFACE__VERSION = CAEXBASICOBJECT__VERSION;

        static const int EXTERNALINTERFACE__REVISION = CAEXBASICOBJECT__REVISION;

        static const int EXTERNALINTERFACE__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int EXTERNALINTERFACE__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int EXTERNALINTERFACE__ID = CAEXOBJECT__ID;

        static const int EXTERNALINTERFACE__NAME = CAEXOBJECT__NAME;

        static const int EXTERNALINTERFACE__ATTRIBUTE =
                INTERFACECLASS__ATTRIBUTE;

        static const int EXTERNALINTERFACE__REFBASECLASSPATH =
                INTERFACECLASS__REFBASECLASSPATH;

        static const int EXTERNALINTERFACE__BASECLASS =
                INTERFACECLASS__BASECLASS;

        static const int EXTERNALINTERFACE__INTERFACECLASS =
                INTERFACECLASS__INTERFACECLASS;

        static const int EXTERNALINTERFACE__EXTERNALINTERFACE =
                INTERFACECLASS__EXTERNALINTERFACE;

        // IDs for classifiers for class ExternalReference 

        static const int EXTERNALREFERENCE__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int EXTERNALREFERENCE__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int EXTERNALREFERENCE__VERSION = CAEXBASICOBJECT__VERSION;

        static const int EXTERNALREFERENCE__REVISION = CAEXBASICOBJECT__REVISION;

        static const int EXTERNALREFERENCE__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int EXTERNALREFERENCE__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class InstanceHierarchy 

        static const int INSTANCEHIERARCHY__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int INSTANCEHIERARCHY__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int INSTANCEHIERARCHY__VERSION = CAEXBASICOBJECT__VERSION;

        static const int INSTANCEHIERARCHY__REVISION = CAEXBASICOBJECT__REVISION;

        static const int INSTANCEHIERARCHY__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int INSTANCEHIERARCHY__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int INSTANCEHIERARCHY__ID = CAEXOBJECT__ID;

        static const int INSTANCEHIERARCHY__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class InterfaceClass 

        static const int INTERFACECLASS__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int INTERFACECLASS__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int INTERFACECLASS__VERSION = CAEXBASICOBJECT__VERSION;

        static const int INTERFACECLASS__REVISION = CAEXBASICOBJECT__REVISION;

        static const int INTERFACECLASS__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int INTERFACECLASS__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int INTERFACECLASS__ID = CAEXOBJECT__ID;

        static const int INTERFACECLASS__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class InterfaceClassLib 

        static const int INTERFACECLASSLIB__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int INTERFACECLASSLIB__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int INTERFACECLASSLIB__VERSION = CAEXBASICOBJECT__VERSION;

        static const int INTERFACECLASSLIB__REVISION = CAEXBASICOBJECT__REVISION;

        static const int INTERFACECLASSLIB__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int INTERFACECLASSLIB__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int INTERFACECLASSLIB__ID = CAEXOBJECT__ID;

        static const int INTERFACECLASSLIB__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class InterfaceFamily 

        static const int INTERFACEFAMILY__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int INTERFACEFAMILY__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int INTERFACEFAMILY__VERSION = CAEXBASICOBJECT__VERSION;

        static const int INTERFACEFAMILY__REVISION = CAEXBASICOBJECT__REVISION;

        static const int INTERFACEFAMILY__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int INTERFACEFAMILY__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int INTERFACEFAMILY__ID = CAEXOBJECT__ID;

        static const int INTERFACEFAMILY__NAME = CAEXOBJECT__NAME;

        static const int INTERFACEFAMILY__ATTRIBUTE = INTERFACECLASS__ATTRIBUTE;

        static const int INTERFACEFAMILY__REFBASECLASSPATH =
                INTERFACECLASS__REFBASECLASSPATH;

        static const int INTERFACEFAMILY__BASECLASS = INTERFACECLASS__BASECLASS;

        static const int INTERFACEFAMILY__INTERFACECLASS =
                INTERFACECLASS__INTERFACECLASS;

        static const int INTERFACEFAMILY__EXTERNALINTERFACE =
                INTERFACECLASS__EXTERNALINTERFACE;

        // IDs for classifiers for class InterfaceIDMapping 

        static const int INTERFACEIDMAPPING__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int INTERFACEIDMAPPING__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int INTERFACEIDMAPPING__VERSION = CAEXBASICOBJECT__VERSION;

        static const int INTERFACEIDMAPPING__REVISION =
                CAEXBASICOBJECT__REVISION;

        static const int INTERFACEIDMAPPING__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int INTERFACEIDMAPPING__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class InternalElement 

        static const int INTERNALELEMENT__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int INTERNALELEMENT__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int INTERNALELEMENT__VERSION = CAEXBASICOBJECT__VERSION;

        static const int INTERNALELEMENT__REVISION = CAEXBASICOBJECT__REVISION;

        static const int INTERNALELEMENT__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int INTERNALELEMENT__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int INTERNALELEMENT__ID = CAEXOBJECT__ID;

        static const int INTERNALELEMENT__NAME = CAEXOBJECT__NAME;

        static const int INTERNALELEMENT__ATTRIBUTE = SYSTEMUNITCLASS__ATTRIBUTE;

        static const int INTERNALELEMENT__EXTERNALINTERFACE =
                SYSTEMUNITCLASS__EXTERNALINTERFACE;

        static const int INTERNALELEMENT__INTERNALELEMENT =
                SYSTEMUNITCLASS__INTERNALELEMENT;

        static const int INTERNALELEMENT__SUPPORTEDROLECLASS =
                SYSTEMUNITCLASS__SUPPORTEDROLECLASS;

        static const int INTERNALELEMENT__INTERNALLINK =
                SYSTEMUNITCLASS__INTERNALLINK;

        static const int INTERNALELEMENT__BASECLASS = SYSTEMUNITCLASS__BASECLASS;

        static const int INTERNALELEMENT__SYSTEMUNITCLASS =
                SYSTEMUNITCLASS__SYSTEMUNITCLASS;

        static const int INTERNALELEMENT__REFBASECLASSPATH =
                SYSTEMUNITCLASS__REFBASECLASSPATH;

        // IDs for classifiers for class InternalLink 

        static const int INTERNALLINK__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int INTERNALLINK__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int INTERNALLINK__VERSION = CAEXBASICOBJECT__VERSION;

        static const int INTERNALLINK__REVISION = CAEXBASICOBJECT__REVISION;

        static const int INTERNALLINK__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int INTERNALLINK__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int INTERNALLINK__ID = CAEXOBJECT__ID;

        static const int INTERNALLINK__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class Mapping 

        static const int MAPPING__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int MAPPING__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int MAPPING__VERSION = CAEXBASICOBJECT__VERSION;

        static const int MAPPING__REVISION = CAEXBASICOBJECT__REVISION;

        static const int MAPPING__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int MAPPING__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class NominalScaled 

        // IDs for classifiers for class OrdinalScaled 

        // IDs for classifiers for class RefSemantic 

        static const int REFSEMANTIC__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int REFSEMANTIC__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int REFSEMANTIC__VERSION = CAEXBASICOBJECT__VERSION;

        static const int REFSEMANTIC__REVISION = CAEXBASICOBJECT__REVISION;

        static const int REFSEMANTIC__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int REFSEMANTIC__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class Revision 

        static const int REVISION__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int REVISION__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int REVISION__VERSION = CAEXBASICOBJECT__VERSION;

        static const int REVISION__REVISION = CAEXBASICOBJECT__REVISION;

        static const int REVISION__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int REVISION__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class RoleClass 

        static const int ROLECLASS__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int ROLECLASS__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int ROLECLASS__VERSION = CAEXBASICOBJECT__VERSION;

        static const int ROLECLASS__REVISION = CAEXBASICOBJECT__REVISION;

        static const int ROLECLASS__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int ROLECLASS__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int ROLECLASS__ID = CAEXOBJECT__ID;

        static const int ROLECLASS__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class RoleClassLib 

        static const int ROLECLASSLIB__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int ROLECLASSLIB__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int ROLECLASSLIB__VERSION = CAEXBASICOBJECT__VERSION;

        static const int ROLECLASSLIB__REVISION = CAEXBASICOBJECT__REVISION;

        static const int ROLECLASSLIB__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int ROLECLASSLIB__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int ROLECLASSLIB__ID = CAEXOBJECT__ID;

        static const int ROLECLASSLIB__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class RoleFamily 

        static const int ROLEFAMILY__CHANGEMODE = CAEXBASICOBJECT__CHANGEMODE;

        static const int ROLEFAMILY__DESCRIPTION = CAEXBASICOBJECT__DESCRIPTION;

        static const int ROLEFAMILY__VERSION = CAEXBASICOBJECT__VERSION;

        static const int ROLEFAMILY__REVISION = CAEXBASICOBJECT__REVISION;

        static const int ROLEFAMILY__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int ROLEFAMILY__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int ROLEFAMILY__ID = CAEXOBJECT__ID;

        static const int ROLEFAMILY__NAME = CAEXOBJECT__NAME;

        static const int ROLEFAMILY__ATTRIBUTE = ROLECLASS__ATTRIBUTE;

        static const int ROLEFAMILY__EXTERNALINTERFACE =
                ROLECLASS__EXTERNALINTERFACE;

        static const int ROLEFAMILY__REFBASECLASSPATH =
                ROLECLASS__REFBASECLASSPATH;

        static const int ROLEFAMILY__BASECLASS = ROLECLASS__BASECLASS;

        static const int ROLEFAMILY__ROLECLASS = ROLECLASS__ROLECLASS;

        // IDs for classifiers for class RoleRequirements 

        static const int ROLEREQUIREMENTS__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int ROLEREQUIREMENTS__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int ROLEREQUIREMENTS__VERSION = CAEXBASICOBJECT__VERSION;

        static const int ROLEREQUIREMENTS__REVISION = CAEXBASICOBJECT__REVISION;

        static const int ROLEREQUIREMENTS__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int ROLEREQUIREMENTS__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class SourceDocumentInformation 

        // IDs for classifiers for class SupportedRoleClass 

        static const int SUPPORTEDROLECLASS__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int SUPPORTEDROLECLASS__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int SUPPORTEDROLECLASS__VERSION = CAEXBASICOBJECT__VERSION;

        static const int SUPPORTEDROLECLASS__REVISION =
                CAEXBASICOBJECT__REVISION;

        static const int SUPPORTEDROLECLASS__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int SUPPORTEDROLECLASS__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        // IDs for classifiers for class SystemUnitClass 

        static const int SYSTEMUNITCLASS__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int SYSTEMUNITCLASS__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int SYSTEMUNITCLASS__VERSION = CAEXBASICOBJECT__VERSION;

        static const int SYSTEMUNITCLASS__REVISION = CAEXBASICOBJECT__REVISION;

        static const int SYSTEMUNITCLASS__COPYRIGHT = CAEXBASICOBJECT__COPYRIGHT;

        static const int SYSTEMUNITCLASS__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int SYSTEMUNITCLASS__ID = CAEXOBJECT__ID;

        static const int SYSTEMUNITCLASS__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class SystemUnitClassLib 

        static const int SYSTEMUNITCLASSLIB__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int SYSTEMUNITCLASSLIB__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int SYSTEMUNITCLASSLIB__VERSION = CAEXBASICOBJECT__VERSION;

        static const int SYSTEMUNITCLASSLIB__REVISION =
                CAEXBASICOBJECT__REVISION;

        static const int SYSTEMUNITCLASSLIB__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int SYSTEMUNITCLASSLIB__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int SYSTEMUNITCLASSLIB__ID = CAEXOBJECT__ID;

        static const int SYSTEMUNITCLASSLIB__NAME = CAEXOBJECT__NAME;

        // IDs for classifiers for class SystemUnitFamily 

        static const int SYSTEMUNITFAMILY__CHANGEMODE =
                CAEXBASICOBJECT__CHANGEMODE;

        static const int SYSTEMUNITFAMILY__DESCRIPTION =
                CAEXBASICOBJECT__DESCRIPTION;

        static const int SYSTEMUNITFAMILY__VERSION = CAEXBASICOBJECT__VERSION;

        static const int SYSTEMUNITFAMILY__REVISION = CAEXBASICOBJECT__REVISION;

        static const int SYSTEMUNITFAMILY__COPYRIGHT =
                CAEXBASICOBJECT__COPYRIGHT;

        static const int SYSTEMUNITFAMILY__ADDITIONALINFORMATION =
                CAEXBASICOBJECT__ADDITIONALINFORMATION;

        static const int SYSTEMUNITFAMILY__ID = CAEXOBJECT__ID;

        static const int SYSTEMUNITFAMILY__NAME = CAEXOBJECT__NAME;

        static const int SYSTEMUNITFAMILY__ATTRIBUTE =
                SYSTEMUNITCLASS__ATTRIBUTE;

        static const int SYSTEMUNITFAMILY__EXTERNALINTERFACE =
                SYSTEMUNITCLASS__EXTERNALINTERFACE;

        static const int SYSTEMUNITFAMILY__INTERNALELEMENT =
                SYSTEMUNITCLASS__INTERNALELEMENT;

        static const int SYSTEMUNITFAMILY__SUPPORTEDROLECLASS =
                SYSTEMUNITCLASS__SUPPORTEDROLECLASS;

        static const int SYSTEMUNITFAMILY__INTERNALLINK =
                SYSTEMUNITCLASS__INTERNALLINK;

        static const int SYSTEMUNITFAMILY__BASECLASS =
                SYSTEMUNITCLASS__BASECLASS;

        static const int SYSTEMUNITFAMILY__SYSTEMUNITCLASS =
                SYSTEMUNITCLASS__SYSTEMUNITCLASS;

        static const int SYSTEMUNITFAMILY__REFBASECLASSPATH =
                SYSTEMUNITCLASS__REFBASECLASSPATH;

        // IDs for classifiers for class UnknownType 

        // IDs for classifiers for class Version 

        // EClassifiers methods

        virtual ::ecore::EDataType_ptr getAttributeDataType();

        virtual ::ecore::EClass_ptr getAttributeFamily();

        virtual ::ecore::EClass_ptr getAttributeNameMapping();

        virtual ::ecore::EClass_ptr getAttribute();

        virtual ::ecore::EClass_ptr getAttributeLib();

        virtual ::ecore::EClass_ptr getAttributeValueRequirement();

        virtual ::ecore::EClass_ptr getCAEXBasicObject();

        virtual ::ecore::EClass_ptr getCAEXFile();

        virtual ::ecore::EClass_ptr getCAEXObject();

        virtual ::ecore::EEnum_ptr getChangeMode();

        virtual ::ecore::EDataType_ptr getChangeModeObject();

        virtual ::ecore::EClass_ptr getDocumentRoot();

        virtual ::ecore::EClass_ptr getExternalInterface();

        virtual ::ecore::EClass_ptr getExternalReference();

        virtual ::ecore::EClass_ptr getInstanceHierarchy();

        virtual ::ecore::EClass_ptr getInterfaceClassLib();

        virtual ::ecore::EClass_ptr getInterfaceClass();

        virtual ::ecore::EClass_ptr getInterfaceFamily();

        virtual ::ecore::EClass_ptr getInterfaceIDMapping();

        virtual ::ecore::EClass_ptr getInternalElement();

        virtual ::ecore::EClass_ptr getInternalLink();

        virtual ::ecore::EClass_ptr getMapping();

        virtual ::ecore::EClass_ptr getNominalScaled();

        virtual ::ecore::EClass_ptr getOrdinalScaled();

        virtual ::ecore::EClass_ptr getRefSemantic();

        virtual ::ecore::EClass_ptr getRoleClassLib();

        virtual ::ecore::EClass_ptr getRoleClass();

        virtual ::ecore::EClass_ptr getRoleFamily();

        virtual ::ecore::EClass_ptr getRoleRequirements();

        virtual ::ecore::EClass_ptr getSourceDocumentInformation();

        virtual ::ecore::EClass_ptr getSupportedRoleClass();

        virtual ::ecore::EClass_ptr getSystemUnitClassLib();

        virtual ::ecore::EClass_ptr getSystemUnitClass();

        virtual ::ecore::EClass_ptr getSystemUnitFamily();

        virtual ::ecore::EClass_ptr getUnknownType();

        virtual ::ecore::EClass_ptr getCopyright();

        virtual ::ecore::EClass_ptr getDescription();

        virtual ::ecore::EClass_ptr getRevision();

        virtual ::ecore::EClass_ptr getVersion();

        virtual ::ecore::EClass_ptr getAdditionalInformation();

        // EStructuralFeatures methods

        virtual ::ecore::EAttribute_ptr getCAEXBasicObject__changeMode();

        virtual ::ecore::EReference_ptr getCAEXBasicObject__description();

        virtual ::ecore::EReference_ptr getCAEXBasicObject__version();

        virtual ::ecore::EReference_ptr getCAEXBasicObject__revision();

        virtual ::ecore::EReference_ptr getCAEXBasicObject__copyright();

        virtual ::ecore::EReference_ptr getCAEXBasicObject__additionalInformation();

        virtual ::ecore::EAttribute_ptr getCAEXObject__iD();

        virtual ::ecore::EAttribute_ptr getCAEXObject__name();

        virtual ::ecore::EAttribute_ptr getAttribute__defaultValue();

        virtual ::ecore::EAttribute_ptr getAttribute__value();

        virtual ::ecore::EReference_ptr getAttribute__refSemantic();

        virtual ::ecore::EReference_ptr getAttribute__constraint();

        virtual ::ecore::EReference_ptr getAttribute__attribute();

        virtual ::ecore::EAttribute_ptr getAttribute__attributeDataType();

        virtual ::ecore::EAttribute_ptr getAttribute__refAttributeType();

        virtual ::ecore::EAttribute_ptr getAttribute__unit();

        virtual ::ecore::EReference_ptr getAttribute__referenceAttribute();

        virtual ::ecore::EAttribute_ptr getAttributeNameMapping__roleAttributeName();

        virtual ::ecore::EAttribute_ptr getAttributeNameMapping__systemUnitAttributeName();

        virtual ::ecore::EReference_ptr getAttributeNameMapping__roleAttribute();

        virtual ::ecore::EReference_ptr getAttributeNameMapping__systemUnitAttribute();

        virtual ::ecore::EReference_ptr getAttributeLib__attributeType();

        virtual ::ecore::EReference_ptr getAttributeValueRequirement__ordinalScaledType();

        virtual ::ecore::EReference_ptr getAttributeValueRequirement__nominalScaledType();

        virtual ::ecore::EReference_ptr getAttributeValueRequirement__unknownType();

        virtual ::ecore::EAttribute_ptr getAttributeValueRequirement__name();

        virtual ::ecore::EAttribute_ptr getCAEXFile__superiorStandardVersion();

        virtual ::ecore::EReference_ptr getCAEXFile__sourceDocumentInformation();

        virtual ::ecore::EReference_ptr getCAEXFile__externalReference();

        virtual ::ecore::EReference_ptr getCAEXFile__instanceHierarchy();

        virtual ::ecore::EReference_ptr getCAEXFile__interfaceClassLib();

        virtual ::ecore::EReference_ptr getCAEXFile__roleClassLib();

        virtual ::ecore::EReference_ptr getCAEXFile__systemUnitClassLib();

        virtual ::ecore::EReference_ptr getCAEXFile__attributeTypeLib();

        virtual ::ecore::EAttribute_ptr getCAEXFile__fileName();

        virtual ::ecore::EAttribute_ptr getCAEXFile__schemaVersion();

        virtual ::ecore::EAttribute_ptr getDocumentRoot__mixed();

        virtual ::ecore::EReference_ptr getDocumentRoot__xMLNSPrefixMap();

        virtual ::ecore::EReference_ptr getDocumentRoot__xSISchemaLocation();

        virtual ::ecore::EReference_ptr getDocumentRoot__cAEXFile();

        virtual ::ecore::EReference_ptr getInterfaceClass__attribute();

        virtual ::ecore::EAttribute_ptr getInterfaceClass__refBaseClassPath();

        virtual ::ecore::EReference_ptr getInterfaceClass__baseClass();

        virtual ::ecore::EReference_ptr getInterfaceClass__interfaceClass();

        virtual ::ecore::EReference_ptr getInterfaceClass__externalInterface();

        virtual ::ecore::EAttribute_ptr getExternalReference__alias();

        virtual ::ecore::EAttribute_ptr getExternalReference__path();

        virtual ::ecore::EReference_ptr getInstanceHierarchy__internalElement();

        virtual ::ecore::EReference_ptr getInterfaceClassLib__interfaceClass();

        virtual ::ecore::EAttribute_ptr getInterfaceIDMapping__roleInterfaceID();

        virtual ::ecore::EAttribute_ptr getInterfaceIDMapping__systemUnitInterfaceID();

        virtual ::ecore::EReference_ptr getInterfaceIDMapping__roleInterface();

        virtual ::ecore::EReference_ptr getInterfaceIDMapping__systemUnitInterface();

        virtual ::ecore::EReference_ptr getSystemUnitClass__attribute();

        virtual ::ecore::EReference_ptr getSystemUnitClass__externalInterface();

        virtual ::ecore::EReference_ptr getSystemUnitClass__internalElement();

        virtual ::ecore::EReference_ptr getSystemUnitClass__supportedRoleClass();

        virtual ::ecore::EReference_ptr getSystemUnitClass__internalLink();

        virtual ::ecore::EReference_ptr getSystemUnitClass__baseClass();

        virtual ::ecore::EReference_ptr getSystemUnitClass__systemUnitClass();

        virtual ::ecore::EAttribute_ptr getSystemUnitClass__refBaseClassPath();

        virtual ::ecore::EReference_ptr getInternalElement__roleRequirements();

        virtual ::ecore::EAttribute_ptr getInternalElement__refBaseSystemUnitPath();

        virtual ::ecore::EReference_ptr getInternalElement__baseSystemUnit();

        virtual ::ecore::EAttribute_ptr getInternalLink__refPartnerSideA();

        virtual ::ecore::EAttribute_ptr getInternalLink__refPartnerSideB();

        virtual ::ecore::EReference_ptr getInternalLink__partnerSideA();

        virtual ::ecore::EReference_ptr getInternalLink__partnerSideB();

        virtual ::ecore::EReference_ptr getMapping__attributeNameMapping();

        virtual ::ecore::EReference_ptr getMapping__interfaceIDMapping();

        virtual ::ecore::EAttribute_ptr getNominalScaled__requiredValue();

        virtual ::ecore::EAttribute_ptr getOrdinalScaled__requiredMaxValue();

        virtual ::ecore::EAttribute_ptr getOrdinalScaled__requiredValue();

        virtual ::ecore::EAttribute_ptr getOrdinalScaled__requiredMinValue();

        virtual ::ecore::EAttribute_ptr getRefSemantic__correspondingAttributePath();

        virtual ::ecore::EReference_ptr getRoleClassLib__roleClass();

        virtual ::ecore::EReference_ptr getRoleClass__attribute();

        virtual ::ecore::EReference_ptr getRoleClass__externalInterface();

        virtual ::ecore::EAttribute_ptr getRoleClass__refBaseClassPath();

        virtual ::ecore::EReference_ptr getRoleClass__baseClass();

        virtual ::ecore::EReference_ptr getRoleClass__roleClass();

        virtual ::ecore::EReference_ptr getRoleRequirements__attribute();

        virtual ::ecore::EReference_ptr getRoleRequirements__externalInterface();

        virtual ::ecore::EReference_ptr getRoleRequirements__mappingObject();

        virtual ::ecore::EReference_ptr getRoleRequirements__roleClass();

        virtual ::ecore::EAttribute_ptr getRoleRequirements__refBaseRoleClassPath();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__lastWritingDateTime();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originID();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originName();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originProjectID();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originProjectTitle();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originRelease();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originVendor();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originVendorURL();

        virtual ::ecore::EAttribute_ptr getSourceDocumentInformation__originVersion();

        virtual ::ecore::EReference_ptr getSupportedRoleClass__mappingObject();

        virtual ::ecore::EAttribute_ptr getSupportedRoleClass__refRoleClassPath();

        virtual ::ecore::EReference_ptr getSupportedRoleClass__roleClass();

        virtual ::ecore::EReference_ptr getSystemUnitClassLib__systemUnitClass();

        virtual ::ecore::EAttribute_ptr getUnknownType__requirements();

        virtual ::ecore::EAttribute_ptr getCopyright__value();

        virtual ::ecore::EAttribute_ptr getCopyright__changeMode();

        virtual ::ecore::EAttribute_ptr getDescription__value();

        virtual ::ecore::EAttribute_ptr getDescription__changeMode();

        virtual ::ecore::EAttribute_ptr getRevision__revisionDate();

        virtual ::ecore::EAttribute_ptr getRevision__oldVersion();

        virtual ::ecore::EAttribute_ptr getRevision__newVersion();

        virtual ::ecore::EAttribute_ptr getRevision__authorName();

        virtual ::ecore::EAttribute_ptr getRevision__comment();

        virtual ::ecore::EAttribute_ptr getVersion__value();

        virtual ::ecore::EAttribute_ptr getVersion__changeMode();

        virtual ::ecore::EAttribute_ptr getElement__name();

        virtual ::ecore::EAttribute_ptr getElement__value();

        virtual ::ecore::EReference_ptr getGenericElement__nestedElements();

        virtual ::ecore::EReference_ptr getGenericElement__attributes();

        virtual ::ecore::EAttribute_ptr getGenericElement__elementFeatureMap();

        virtual ::ecore::EAttribute_ptr getGenericElement__attributeFeatureMap();

    protected:

        static std::auto_ptr< CaexPackage > s_instance;

        CaexPackage();

        // EClass instances 

        ::ecore::EClass_ptr m_AttributeFamilyEClass;

        ::ecore::EClass_ptr m_AttributeNameMappingEClass;

        ::ecore::EClass_ptr m_AttributeEClass;

        ::ecore::EClass_ptr m_AttributeLibEClass;

        ::ecore::EClass_ptr m_AttributeValueRequirementEClass;

        ::ecore::EClass_ptr m_CAEXBasicObjectEClass;

        ::ecore::EClass_ptr m_CAEXFileEClass;

        ::ecore::EClass_ptr m_CAEXObjectEClass;

        ::ecore::EClass_ptr m_DocumentRootEClass;

        ::ecore::EClass_ptr m_ExternalInterfaceEClass;

        ::ecore::EClass_ptr m_ExternalReferenceEClass;

        ::ecore::EClass_ptr m_InstanceHierarchyEClass;

        ::ecore::EClass_ptr m_InterfaceClassLibEClass;

        ::ecore::EClass_ptr m_InterfaceClassEClass;

        ::ecore::EClass_ptr m_InterfaceFamilyEClass;

        ::ecore::EClass_ptr m_InterfaceIDMappingEClass;

        ::ecore::EClass_ptr m_InternalElementEClass;

        ::ecore::EClass_ptr m_InternalLinkEClass;

        ::ecore::EClass_ptr m_MappingEClass;

        ::ecore::EClass_ptr m_NominalScaledEClass;

        ::ecore::EClass_ptr m_OrdinalScaledEClass;

        ::ecore::EClass_ptr m_RefSemanticEClass;

        ::ecore::EClass_ptr m_RoleClassLibEClass;

        ::ecore::EClass_ptr m_RoleClassEClass;

        ::ecore::EClass_ptr m_RoleFamilyEClass;

        ::ecore::EClass_ptr m_RoleRequirementsEClass;

        ::ecore::EClass_ptr m_SourceDocumentInformationEClass;

        ::ecore::EClass_ptr m_SupportedRoleClassEClass;

        ::ecore::EClass_ptr m_SystemUnitClassLibEClass;

        ::ecore::EClass_ptr m_SystemUnitClassEClass;

        ::ecore::EClass_ptr m_SystemUnitFamilyEClass;

        ::ecore::EClass_ptr m_UnknownTypeEClass;

        ::ecore::EClass_ptr m_CopyrightEClass;

        ::ecore::EClass_ptr m_DescriptionEClass;

        ::ecore::EClass_ptr m_RevisionEClass;

        ::ecore::EClass_ptr m_VersionEClass;

        ::ecore::EClass_ptr m_AdditionalInformationEClass;

        // EEnuminstances 

        ::ecore::EEnum_ptr m_ChangeModeEEnum;

        // EDataType instances 

        ::ecore::EDataType_ptr m_AttributeDataTypeEDataType;

        ::ecore::EDataType_ptr m_ChangeModeObjectEDataType;

        // EStructuralFeatures instances

        ::ecore::EAttribute_ptr m_CAEXBasicObject__changeMode;

        ::ecore::EReference_ptr m_CAEXBasicObject__description;

        ::ecore::EReference_ptr m_CAEXBasicObject__version;

        ::ecore::EReference_ptr m_CAEXBasicObject__revision;

        ::ecore::EReference_ptr m_CAEXBasicObject__copyright;

        ::ecore::EReference_ptr m_CAEXBasicObject__additionalInformation;

        ::ecore::EAttribute_ptr m_CAEXObject__iD;

        ::ecore::EAttribute_ptr m_CAEXObject__name;

        ::ecore::EAttribute_ptr m_Attribute__defaultValue;

        ::ecore::EAttribute_ptr m_Attribute__value;

        ::ecore::EReference_ptr m_Attribute__refSemantic;

        ::ecore::EReference_ptr m_Attribute__constraint;

        ::ecore::EReference_ptr m_Attribute__attribute;

        ::ecore::EAttribute_ptr m_Attribute__attributeDataType;

        ::ecore::EAttribute_ptr m_Attribute__refAttributeType;

        ::ecore::EAttribute_ptr m_Attribute__unit;

        ::ecore::EReference_ptr m_Attribute__referenceAttribute;

        ::ecore::EAttribute_ptr m_AttributeNameMapping__roleAttributeName;

        ::ecore::EAttribute_ptr m_AttributeNameMapping__systemUnitAttributeName;

        ::ecore::EReference_ptr m_AttributeNameMapping__roleAttribute;

        ::ecore::EReference_ptr m_AttributeNameMapping__systemUnitAttribute;

        ::ecore::EReference_ptr m_AttributeLib__attributeType;

        ::ecore::EReference_ptr m_AttributeValueRequirement__ordinalScaledType;

        ::ecore::EReference_ptr m_AttributeValueRequirement__nominalScaledType;

        ::ecore::EReference_ptr m_AttributeValueRequirement__unknownType;

        ::ecore::EAttribute_ptr m_AttributeValueRequirement__name;

        ::ecore::EAttribute_ptr m_CAEXFile__superiorStandardVersion;

        ::ecore::EReference_ptr m_CAEXFile__sourceDocumentInformation;

        ::ecore::EReference_ptr m_CAEXFile__externalReference;

        ::ecore::EReference_ptr m_CAEXFile__instanceHierarchy;

        ::ecore::EReference_ptr m_CAEXFile__interfaceClassLib;

        ::ecore::EReference_ptr m_CAEXFile__roleClassLib;

        ::ecore::EReference_ptr m_CAEXFile__systemUnitClassLib;

        ::ecore::EReference_ptr m_CAEXFile__attributeTypeLib;

        ::ecore::EAttribute_ptr m_CAEXFile__fileName;

        ::ecore::EAttribute_ptr m_CAEXFile__schemaVersion;

        ::ecore::EAttribute_ptr m_DocumentRoot__mixed;

        ::ecore::EReference_ptr m_DocumentRoot__xMLNSPrefixMap;

        ::ecore::EReference_ptr m_DocumentRoot__xSISchemaLocation;

        ::ecore::EReference_ptr m_DocumentRoot__cAEXFile;

        ::ecore::EReference_ptr m_InterfaceClass__attribute;

        ::ecore::EAttribute_ptr m_InterfaceClass__refBaseClassPath;

        ::ecore::EReference_ptr m_InterfaceClass__baseClass;

        ::ecore::EReference_ptr m_InterfaceClass__interfaceClass;

        ::ecore::EReference_ptr m_InterfaceClass__externalInterface;

        ::ecore::EAttribute_ptr m_ExternalReference__alias;

        ::ecore::EAttribute_ptr m_ExternalReference__path;

        ::ecore::EReference_ptr m_InstanceHierarchy__internalElement;

        ::ecore::EReference_ptr m_InterfaceClassLib__interfaceClass;

        ::ecore::EAttribute_ptr m_InterfaceIDMapping__roleInterfaceID;

        ::ecore::EAttribute_ptr m_InterfaceIDMapping__systemUnitInterfaceID;

        ::ecore::EReference_ptr m_InterfaceIDMapping__roleInterface;

        ::ecore::EReference_ptr m_InterfaceIDMapping__systemUnitInterface;

        ::ecore::EReference_ptr m_SystemUnitClass__attribute;

        ::ecore::EReference_ptr m_SystemUnitClass__externalInterface;

        ::ecore::EReference_ptr m_SystemUnitClass__internalElement;

        ::ecore::EReference_ptr m_SystemUnitClass__supportedRoleClass;

        ::ecore::EReference_ptr m_SystemUnitClass__internalLink;

        ::ecore::EReference_ptr m_SystemUnitClass__baseClass;

        ::ecore::EReference_ptr m_SystemUnitClass__systemUnitClass;

        ::ecore::EAttribute_ptr m_SystemUnitClass__refBaseClassPath;

        ::ecore::EReference_ptr m_InternalElement__roleRequirements;

        ::ecore::EAttribute_ptr m_InternalElement__refBaseSystemUnitPath;

        ::ecore::EReference_ptr m_InternalElement__baseSystemUnit;

        ::ecore::EAttribute_ptr m_InternalLink__refPartnerSideA;

        ::ecore::EAttribute_ptr m_InternalLink__refPartnerSideB;

        ::ecore::EReference_ptr m_InternalLink__partnerSideA;

        ::ecore::EReference_ptr m_InternalLink__partnerSideB;

        ::ecore::EReference_ptr m_Mapping__attributeNameMapping;

        ::ecore::EReference_ptr m_Mapping__interfaceIDMapping;

        ::ecore::EAttribute_ptr m_NominalScaled__requiredValue;

        ::ecore::EAttribute_ptr m_OrdinalScaled__requiredMaxValue;

        ::ecore::EAttribute_ptr m_OrdinalScaled__requiredValue;

        ::ecore::EAttribute_ptr m_OrdinalScaled__requiredMinValue;

        ::ecore::EAttribute_ptr m_RefSemantic__correspondingAttributePath;

        ::ecore::EReference_ptr m_RoleClassLib__roleClass;

        ::ecore::EReference_ptr m_RoleClass__attribute;

        ::ecore::EReference_ptr m_RoleClass__externalInterface;

        ::ecore::EAttribute_ptr m_RoleClass__refBaseClassPath;

        ::ecore::EReference_ptr m_RoleClass__baseClass;

        ::ecore::EReference_ptr m_RoleClass__roleClass;

        ::ecore::EReference_ptr m_RoleRequirements__attribute;

        ::ecore::EReference_ptr m_RoleRequirements__externalInterface;

        ::ecore::EReference_ptr m_RoleRequirements__mappingObject;

        ::ecore::EReference_ptr m_RoleRequirements__roleClass;

        ::ecore::EAttribute_ptr m_RoleRequirements__refBaseRoleClassPath;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__lastWritingDateTime;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originID;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originName;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originProjectID;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originProjectTitle;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originRelease;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originVendor;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originVendorURL;

        ::ecore::EAttribute_ptr m_SourceDocumentInformation__originVersion;

        ::ecore::EReference_ptr m_SupportedRoleClass__mappingObject;

        ::ecore::EAttribute_ptr m_SupportedRoleClass__refRoleClassPath;

        ::ecore::EReference_ptr m_SupportedRoleClass__roleClass;

        ::ecore::EReference_ptr m_SystemUnitClassLib__systemUnitClass;

        ::ecore::EAttribute_ptr m_UnknownType__requirements;

        ::ecore::EAttribute_ptr m_Copyright__value;

        ::ecore::EAttribute_ptr m_Copyright__changeMode;

        ::ecore::EAttribute_ptr m_Description__value;

        ::ecore::EAttribute_ptr m_Description__changeMode;

        ::ecore::EAttribute_ptr m_Revision__revisionDate;

        ::ecore::EAttribute_ptr m_Revision__oldVersion;

        ::ecore::EAttribute_ptr m_Revision__newVersion;

        ::ecore::EAttribute_ptr m_Revision__authorName;

        ::ecore::EAttribute_ptr m_Revision__comment;

        ::ecore::EAttribute_ptr m_Version__value;

        ::ecore::EAttribute_ptr m_Version__changeMode;

        ::ecore::EAttribute_ptr m_Element__name;

        ::ecore::EAttribute_ptr m_Element__value;

        ::ecore::EReference_ptr m_GenericElement__nestedElements;

        ::ecore::EReference_ptr m_GenericElement__attributes;

        ::ecore::EAttribute_ptr m_GenericElement__elementFeatureMap;

        ::ecore::EAttribute_ptr m_GenericElement__attributeFeatureMap;

    };

} // caex

#endif // _CAEXPACKAGE_HPP

