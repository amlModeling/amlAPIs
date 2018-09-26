// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SystemUnitClassImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SystemUnitClass.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
#include <caex/InternalElement.hpp>
#include <caex/SupportedRoleClass.hpp>
#include <caex/InternalLink.hpp>
#include <caex/SystemUnitClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(SystemUnitClassImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void SystemUnitClass::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_attribute->size(); i++)
    {
        (*m_attribute)[i]->_initialize();
        (*m_attribute)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSystemUnitClass__attribute());
    }
    for (size_t i = 0; i < m_externalInterface->size(); i++)
    {
        (*m_externalInterface)[i]->_initialize();
        (*m_externalInterface)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSystemUnitClass__externalInterface());
    }
    for (size_t i = 0; i < m_internalElement->size(); i++)
    {
        (*m_internalElement)[i]->_initialize();
        (*m_internalElement)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSystemUnitClass__internalElement());
    }
    for (size_t i = 0; i < m_supportedRoleClass->size(); i++)
    {
        (*m_supportedRoleClass)[i]->_initialize();
        (*m_supportedRoleClass)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSystemUnitClass__supportedRoleClass());
    }
    for (size_t i = 0; i < m_internalLink->size(); i++)
    {
        (*m_internalLink)[i]->_initialize();
        (*m_internalLink)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSystemUnitClass__internalLink());
    }
    for (size_t i = 0; i < m_systemUnitClass->size(); i++)
    {
        (*m_systemUnitClass)[i]->_initialize();
        (*m_systemUnitClass)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSystemUnitClass__systemUnitClass());
    }

    /*PROTECTED REGION ID(SystemUnitClassImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SystemUnitClass::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::SYSTEMUNITCLASS__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__EXTERNALINTERFACE:
    {
        _any = m_externalInterface->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALELEMENT:
    {
        _any = m_internalElement->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__SUPPORTEDROLECLASS:
    {
        _any = m_supportedRoleClass->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALLINK:
    {
        _any = m_internalLink->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__BASECLASS:
    {
        _any = static_cast< ::ecore::EObject* >(m_baseClass);
    }
        return _any;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__SYSTEMUNITCLASS:
    {
        _any = m_systemUnitClass->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__REFBASECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refBaseClassPath);
    }
        return _any;

    }
    throw "Error";
}

void SystemUnitClass::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SYSTEMUNITCLASS__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::SystemUnitClass::getAttribute().clear();
        ::caex::SystemUnitClass::getAttribute().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__EXTERNALINTERFACE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::SystemUnitClass::getExternalInterface().clear();
        ::caex::SystemUnitClass::getExternalInterface().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALELEMENT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::SystemUnitClass::getInternalElement().clear();
        ::caex::SystemUnitClass::getInternalElement().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__SUPPORTEDROLECLASS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::SystemUnitClass::getSupportedRoleClass().clear();
        ::caex::SystemUnitClass::getSupportedRoleClass().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALLINK:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::SystemUnitClass::getInternalLink().clear();
        ::caex::SystemUnitClass::getInternalLink().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__BASECLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::SystemUnitClass_ptr _t1 =
                dynamic_cast< ::caex::SystemUnitClass_ptr >(_t0);
        ::caex::SystemUnitClass::setBaseClass(_t1);
    }
        return;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__SYSTEMUNITCLASS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::SystemUnitClass::getSystemUnitClass().clear();
        ::caex::SystemUnitClass::getSystemUnitClass().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__REFBASECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refBaseClassPath);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SystemUnitClass::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SYSTEMUNITCLASS__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::caex::CaexPackage::SYSTEMUNITCLASS__EXTERNALINTERFACE:
        return m_externalInterface && m_externalInterface->size();
    case ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALELEMENT:
        return m_internalElement && m_internalElement->size();
    case ::caex::CaexPackage::SYSTEMUNITCLASS__SUPPORTEDROLECLASS:
        return m_supportedRoleClass && m_supportedRoleClass->size();
    case ::caex::CaexPackage::SYSTEMUNITCLASS__INTERNALLINK:
        return m_internalLink && m_internalLink->size();
    case ::caex::CaexPackage::SYSTEMUNITCLASS__BASECLASS:
        return m_baseClass;
    case ::caex::CaexPackage::SYSTEMUNITCLASS__SYSTEMUNITCLASS:
        return m_systemUnitClass && m_systemUnitClass->size();
    case ::caex::CaexPackage::SYSTEMUNITCLASS__REFBASECLASSPATH:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refBaseClassPath);

    }
    throw "Error";
}

void SystemUnitClass::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SystemUnitClass::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getSystemUnitClass();
    return _eclass;
}

