// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RoleRequirementsImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RoleRequirements.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
#include <caex/Mapping.hpp>
#include <caex/RoleClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(RoleRequirementsImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void RoleRequirements::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_attribute->size(); i++)
    {
        (*m_attribute)[i]->_initialize();
        (*m_attribute)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getRoleRequirements__attribute());
    }
    for (size_t i = 0; i < m_externalInterface->size(); i++)
    {
        (*m_externalInterface)[i]->_initialize();
        (*m_externalInterface)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getRoleRequirements__externalInterface());
    }
    if (m_mappingObject)
    {
        m_mappingObject->_initialize();
        m_mappingObject->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getRoleRequirements__mappingObject());
    }

    /*PROTECTED REGION ID(RoleRequirementsImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject RoleRequirements::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::ROLEREQUIREMENTS__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__EXTERNALINTERFACE:
    {
        _any = m_externalInterface->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__MAPPINGOBJECT:
    {
        _any = static_cast< ::ecore::EObject* >(m_mappingObject);
    }
        return _any;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__ROLECLASS:
    {
        _any = static_cast< ::ecore::EObject* >(m_roleClass);
    }
        return _any;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__REFBASEROLECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refBaseRoleClassPath);
    }
        return _any;

    }
    throw "Error";
}

void RoleRequirements::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ROLEREQUIREMENTS__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::RoleRequirements::getAttribute().clear();
        ::caex::RoleRequirements::getAttribute().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__EXTERNALINTERFACE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::RoleRequirements::getExternalInterface().clear();
        ::caex::RoleRequirements::getExternalInterface().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__MAPPINGOBJECT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Mapping_ptr _t1 = dynamic_cast< ::caex::Mapping_ptr >(_t0);
        ::caex::RoleRequirements::setMappingObject(_t1);
    }
        return;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__ROLECLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::RoleClass_ptr _t1 = dynamic_cast< ::caex::RoleClass_ptr >(_t0);
        ::caex::RoleRequirements::setRoleClass(_t1);
    }
        return;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__REFBASEROLECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refBaseRoleClassPath);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean RoleRequirements::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ROLEREQUIREMENTS__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::caex::CaexPackage::ROLEREQUIREMENTS__EXTERNALINTERFACE:
        return m_externalInterface && m_externalInterface->size();
    case ::caex::CaexPackage::ROLEREQUIREMENTS__MAPPINGOBJECT:
        return m_mappingObject;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__ROLECLASS:
        return m_roleClass;
    case ::caex::CaexPackage::ROLEREQUIREMENTS__REFBASEROLECLASSPATH:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refBaseRoleClassPath);

    }
    throw "Error";
}

void RoleRequirements::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr RoleRequirements::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getRoleRequirements();
    return _eclass;
}

