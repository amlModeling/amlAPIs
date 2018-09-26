// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InterfaceIDMappingImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterfaceIDMapping.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/ExternalInterface.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(InterfaceIDMappingImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void InterfaceIDMapping::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(InterfaceIDMappingImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InterfaceIDMapping::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACEID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_roleInterfaceID);
    }
        return _any;
    case ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACEID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_systemUnitInterfaceID);
    }
        return _any;
    case ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACE:
    {
        _any = static_cast< ::ecore::EObject* >(m_roleInterface);
    }
        return _any;
    case ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACE:
    {
        _any = static_cast< ::ecore::EObject* >(m_systemUnitInterface);
    }
        return _any;

    }
    throw "Error";
}

void InterfaceIDMapping::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACEID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_roleInterfaceID);
    }
        return;
    case ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACEID:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_systemUnitInterfaceID);
    }
        return;
    case ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::ExternalInterface_ptr _t1 =
                dynamic_cast< ::caex::ExternalInterface_ptr >(_t0);
        ::caex::InterfaceIDMapping::setRoleInterface(_t1);
    }
        return;
    case ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::ExternalInterface_ptr _t1 =
                dynamic_cast< ::caex::ExternalInterface_ptr >(_t0);
        ::caex::InterfaceIDMapping::setSystemUnitInterface(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InterfaceIDMapping::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACEID:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_roleInterfaceID);
    case ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACEID:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_systemUnitInterfaceID);
    case ::caex::CaexPackage::INTERFACEIDMAPPING__ROLEINTERFACE:
        return m_roleInterface;
    case ::caex::CaexPackage::INTERFACEIDMAPPING__SYSTEMUNITINTERFACE:
        return m_systemUnitInterface;

    }
    throw "Error";
}

void InterfaceIDMapping::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InterfaceIDMapping::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getInterfaceIDMapping();
    return _eclass;
}

