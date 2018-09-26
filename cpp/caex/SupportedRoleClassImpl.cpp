// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SupportedRoleClassImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SupportedRoleClass.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Mapping.hpp>
#include <caex/RoleClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(SupportedRoleClassImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void SupportedRoleClass::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences
    if (m_mappingObject)
    {
        m_mappingObject->_initialize();
        m_mappingObject->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSupportedRoleClass__mappingObject());
    }

    /*PROTECTED REGION ID(SupportedRoleClassImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SupportedRoleClass::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__MAPPINGOBJECT:
    {
        _any = static_cast< ::ecore::EObject* >(m_mappingObject);
    }
        return _any;
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__REFROLECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refRoleClassPath);
    }
        return _any;
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__ROLECLASS:
    {
        _any = static_cast< ::ecore::EObject* >(m_roleClass);
    }
        return _any;

    }
    throw "Error";
}

void SupportedRoleClass::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__MAPPINGOBJECT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Mapping_ptr _t1 = dynamic_cast< ::caex::Mapping_ptr >(_t0);
        ::caex::SupportedRoleClass::setMappingObject(_t1);
    }
        return;
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__REFROLECLASSPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refRoleClassPath);
    }
        return;
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__ROLECLASS:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::RoleClass_ptr _t1 = dynamic_cast< ::caex::RoleClass_ptr >(_t0);
        ::caex::SupportedRoleClass::setRoleClass(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SupportedRoleClass::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__MAPPINGOBJECT:
        return m_mappingObject;
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__REFROLECLASSPATH:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refRoleClassPath);
    case ::caex::CaexPackage::SUPPORTEDROLECLASS__ROLECLASS:
        return m_roleClass;

    }
    throw "Error";
}

void SupportedRoleClass::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SupportedRoleClass::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getSupportedRoleClass();
    return _eclass;
}

