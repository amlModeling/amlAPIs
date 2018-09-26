// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InterfaceClassImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterfaceClass.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(InterfaceClassImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void InterfaceClass::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_attribute->size(); i++)
    {
        (*m_attribute)[i]->_initialize();
        (*m_attribute)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getInterfaceClass__attribute());
    }
    for (size_t i = 0; i < m_interfaceClass->size(); i++)
    {
        (*m_interfaceClass)[i]->_initialize();
        (*m_interfaceClass)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getInterfaceClass__interfaceClass());
    }
    for (size_t i = 0; i < m_externalInterface->size(); i++)
    {
        (*m_externalInterface)[i]->_initialize();
        (*m_externalInterface)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getInterfaceClass__externalInterface());
    }

    /*PROTECTED REGION ID(InterfaceClassImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InterfaceClass::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACECLASS__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::INTERFACECLASS__REFBASECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refBaseClassPath);
    }
        return _any;
    case ::caex::CaexPackage::INTERFACECLASS__BASECLASS:
    {
        _any = static_cast< ::ecore::EObject* >(m_baseClass);
    }
        return _any;
    case ::caex::CaexPackage::INTERFACECLASS__INTERFACECLASS:
    {
        _any = m_interfaceClass->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::INTERFACECLASS__EXTERNALINTERFACE:
    {
        _any = m_externalInterface->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void InterfaceClass::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACECLASS__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::InterfaceClass::getAttribute().clear();
        ::caex::InterfaceClass::getAttribute().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::INTERFACECLASS__REFBASECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refBaseClassPath);
    }
        return;
    case ::caex::CaexPackage::INTERFACECLASS__BASECLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::InterfaceClass_ptr _t1 =
                dynamic_cast< ::caex::InterfaceClass_ptr >(_t0);
        ::caex::InterfaceClass::setBaseClass(_t1);
    }
        return;
    case ::caex::CaexPackage::INTERFACECLASS__INTERFACECLASS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::InterfaceClass::getInterfaceClass().clear();
        ::caex::InterfaceClass::getInterfaceClass().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::INTERFACECLASS__EXTERNALINTERFACE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::InterfaceClass::getExternalInterface().clear();
        ::caex::InterfaceClass::getExternalInterface().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InterfaceClass::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACECLASS__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::caex::CaexPackage::INTERFACECLASS__REFBASECLASSPATH:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refBaseClassPath);
    case ::caex::CaexPackage::INTERFACECLASS__BASECLASS:
        return m_baseClass;
    case ::caex::CaexPackage::INTERFACECLASS__INTERFACECLASS:
        return m_interfaceClass && m_interfaceClass->size();
    case ::caex::CaexPackage::INTERFACECLASS__EXTERNALINTERFACE:
        return m_externalInterface && m_externalInterface->size();

    }
    throw "Error";
}

void InterfaceClass::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InterfaceClass::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getInterfaceClass();
    return _eclass;
}

