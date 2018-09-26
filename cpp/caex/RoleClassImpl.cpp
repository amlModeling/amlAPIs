// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RoleClassImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RoleClass.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/ExternalInterface.hpp>
#include <caex/RoleClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(RoleClassImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void RoleClass::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_attribute->size(); i++)
    {
        (*m_attribute)[i]->_initialize();
        (*m_attribute)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getRoleClass__attribute());
    }
    for (size_t i = 0; i < m_externalInterface->size(); i++)
    {
        (*m_externalInterface)[i]->_initialize();
        (*m_externalInterface)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getRoleClass__externalInterface());
    }
    for (size_t i = 0; i < m_roleClass->size(); i++)
    {
        (*m_roleClass)[i]->_initialize();
        (*m_roleClass)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getRoleClass__roleClass());
    }

    /*PROTECTED REGION ID(RoleClassImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RoleClass::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::ROLECLASS__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::ROLECLASS__EXTERNALINTERFACE:
    {
        _any = m_externalInterface->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::ROLECLASS__REFBASECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refBaseClassPath);
    }
        return _any;
    case ::caex::CaexPackage::ROLECLASS__BASECLASS:
    {
        _any = static_cast< ::ecore::EObject* >(m_baseClass);
    }
        return _any;
    case ::caex::CaexPackage::ROLECLASS__ROLECLASS:
    {
        _any = m_roleClass->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void RoleClass::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ROLECLASS__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::RoleClass::getAttribute().clear();
        ::caex::RoleClass::getAttribute().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::ROLECLASS__EXTERNALINTERFACE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::RoleClass::getExternalInterface().clear();
        ::caex::RoleClass::getExternalInterface().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::ROLECLASS__REFBASECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refBaseClassPath);
    }
        return;
    case ::caex::CaexPackage::ROLECLASS__BASECLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::RoleClass_ptr _t1 = dynamic_cast< ::caex::RoleClass_ptr >(_t0);
        ::caex::RoleClass::setBaseClass(_t1);
    }
        return;
    case ::caex::CaexPackage::ROLECLASS__ROLECLASS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::RoleClass::getRoleClass().clear();
        ::caex::RoleClass::getRoleClass().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean RoleClass::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ROLECLASS__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::caex::CaexPackage::ROLECLASS__EXTERNALINTERFACE:
        return m_externalInterface && m_externalInterface->size();
    case ::caex::CaexPackage::ROLECLASS__REFBASECLASSPATH:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refBaseClassPath);
    case ::caex::CaexPackage::ROLECLASS__BASECLASS:
        return m_baseClass;
    case ::caex::CaexPackage::ROLECLASS__ROLECLASS:
        return m_roleClass && m_roleClass->size();

    }
    throw "Error";
}

void RoleClass::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr RoleClass::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getRoleClass();
    return _eclass;
}

