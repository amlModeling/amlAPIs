// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InternalLinkImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InternalLink.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/InterfaceClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(InternalLinkImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void InternalLink::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(InternalLinkImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InternalLink::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEA:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refPartnerSideA);
    }
        return _any;
    case ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEB:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refPartnerSideB);
    }
        return _any;
    case ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEA:
    {
        _any = static_cast< ::ecore::EObject* >(m_partnerSideA);
    }
        return _any;
    case ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEB:
    {
        _any = static_cast< ::ecore::EObject* >(m_partnerSideB);
    }
        return _any;

    }
    throw "Error";
}

void InternalLink::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEA:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refPartnerSideA);
    }
        return;
    case ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEB:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refPartnerSideB);
    }
        return;
    case ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEA:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::InterfaceClass_ptr _t1 =
                dynamic_cast< ::caex::InterfaceClass_ptr >(_t0);
        ::caex::InternalLink::setPartnerSideA(_t1);
    }
        return;
    case ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEB:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::InterfaceClass_ptr _t1 =
                dynamic_cast< ::caex::InterfaceClass_ptr >(_t0);
        ::caex::InternalLink::setPartnerSideB(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InternalLink::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEA:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refPartnerSideA);
    case ::caex::CaexPackage::INTERNALLINK__REFPARTNERSIDEB:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refPartnerSideB);
    case ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEA:
        return m_partnerSideA;
    case ::caex::CaexPackage::INTERNALLINK__PARTNERSIDEB:
        return m_partnerSideB;

    }
    throw "Error";
}

void InternalLink::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InternalLink::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getInternalLink();
    return _eclass;
}

