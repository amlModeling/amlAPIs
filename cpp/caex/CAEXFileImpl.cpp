// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CAEXFileImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CAEXFile.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/SourceDocumentInformation.hpp>
#include <caex/ExternalReference.hpp>
#include <caex/InstanceHierarchy.hpp>
#include <caex/InterfaceClassLib.hpp>
#include <caex/RoleClassLib.hpp>
#include <caex/SystemUnitClassLib.hpp>
#include <caex/AttributeLib.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(CAEXFileImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void CAEXFile::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_sourceDocumentInformation->size(); i++)
    {
        (*m_sourceDocumentInformation)[i]->_initialize();
        (*m_sourceDocumentInformation)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXFile__sourceDocumentInformation());
    }
    for (size_t i = 0; i < m_externalReference->size(); i++)
    {
        (*m_externalReference)[i]->_initialize();
        (*m_externalReference)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXFile__externalReference());
    }
    for (size_t i = 0; i < m_instanceHierarchy->size(); i++)
    {
        (*m_instanceHierarchy)[i]->_initialize();
        (*m_instanceHierarchy)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXFile__instanceHierarchy());
    }
    for (size_t i = 0; i < m_interfaceClassLib->size(); i++)
    {
        (*m_interfaceClassLib)[i]->_initialize();
        (*m_interfaceClassLib)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXFile__interfaceClassLib());
    }
    for (size_t i = 0; i < m_roleClassLib->size(); i++)
    {
        (*m_roleClassLib)[i]->_initialize();
        (*m_roleClassLib)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXFile__roleClassLib());
    }
    for (size_t i = 0; i < m_systemUnitClassLib->size(); i++)
    {
        (*m_systemUnitClassLib)[i]->_initialize();
        (*m_systemUnitClassLib)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXFile__systemUnitClassLib());
    }
    for (size_t i = 0; i < m_attributeTypeLib->size(); i++)
    {
        (*m_attributeTypeLib)[i]->_initialize();
        (*m_attributeTypeLib)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getCAEXFile__attributeTypeLib());
    }

    /*PROTECTED REGION ID(CAEXFileImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject CAEXFile::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::CAEXFILE__SUPERIORSTANDARDVERSION:
    {
        std::vector < ::ecorecpp::mapping::any
                > _anys(m_superiorStandardVersion.size());
        for (size_t _i = 0; _i < m_superiorStandardVersion.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::type::String
                    > ::toAny(_anys[_i], m_superiorStandardVersion[_i]);
        _any = _anys;
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__SOURCEDOCUMENTINFORMATION:
    {
        _any = m_sourceDocumentInformation->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__EXTERNALREFERENCE:
    {
        _any = m_externalReference->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__INSTANCEHIERARCHY:
    {
        _any = m_instanceHierarchy->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__INTERFACECLASSLIB:
    {
        _any = m_interfaceClassLib->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__ROLECLASSLIB:
    {
        _any = m_roleClassLib->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__SYSTEMUNITCLASSLIB:
    {
        _any = m_systemUnitClassLib->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__ATTRIBUTETYPELIB:
    {
        _any = m_attributeTypeLib->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_fileName);
    }
        return _any;
    case ::caex::CaexPackage::CAEXFILE__SCHEMAVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_schemaVersion);
    }
        return _any;

    }
    throw "Error";
}

void CAEXFile::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::CAEXFILE__SUPERIORSTANDARDVERSION:
    {
        ::type::String _t0;
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, _t0);
        ::caex::CAEXFile::addSuperiorStandardVersion(_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__SOURCEDOCUMENTINFORMATION:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXFile::getSourceDocumentInformation().clear();
        ::caex::CAEXFile::getSourceDocumentInformation().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__EXTERNALREFERENCE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXFile::getExternalReference().clear();
        ::caex::CAEXFile::getExternalReference().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__INSTANCEHIERARCHY:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXFile::getInstanceHierarchy().clear();
        ::caex::CAEXFile::getInstanceHierarchy().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__INTERFACECLASSLIB:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXFile::getInterfaceClassLib().clear();
        ::caex::CAEXFile::getInterfaceClassLib().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__ROLECLASSLIB:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXFile::getRoleClassLib().clear();
        ::caex::CAEXFile::getRoleClassLib().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__SYSTEMUNITCLASSLIB:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXFile::getSystemUnitClassLib().clear();
        ::caex::CAEXFile::getSystemUnitClassLib().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__ATTRIBUTETYPELIB:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::CAEXFile::getAttributeTypeLib().clear();
        ::caex::CAEXFile::getAttributeTypeLib().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__FILENAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_fileName);
    }
        return;
    case ::caex::CaexPackage::CAEXFILE__SCHEMAVERSION:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_schemaVersion);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean CAEXFile::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::CAEXFILE__SUPERIORSTANDARDVERSION:
        return m_superiorStandardVersion.size();
    case ::caex::CaexPackage::CAEXFILE__SOURCEDOCUMENTINFORMATION:
        return m_sourceDocumentInformation
                && m_sourceDocumentInformation->size();
    case ::caex::CaexPackage::CAEXFILE__EXTERNALREFERENCE:
        return m_externalReference && m_externalReference->size();
    case ::caex::CaexPackage::CAEXFILE__INSTANCEHIERARCHY:
        return m_instanceHierarchy && m_instanceHierarchy->size();
    case ::caex::CaexPackage::CAEXFILE__INTERFACECLASSLIB:
        return m_interfaceClassLib && m_interfaceClassLib->size();
    case ::caex::CaexPackage::CAEXFILE__ROLECLASSLIB:
        return m_roleClassLib && m_roleClassLib->size();
    case ::caex::CaexPackage::CAEXFILE__SYSTEMUNITCLASSLIB:
        return m_systemUnitClassLib && m_systemUnitClassLib->size();
    case ::caex::CaexPackage::CAEXFILE__ATTRIBUTETYPELIB:
        return m_attributeTypeLib && m_attributeTypeLib->size();
    case ::caex::CaexPackage::CAEXFILE__FILENAME:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_fileName);
    case ::caex::CaexPackage::CAEXFILE__SCHEMAVERSION:
        return m_schemaVersion != 3.00;

    }
    throw "Error";
}

void CAEXFile::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr CAEXFile::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getCAEXFile();
    return _eclass;
}

