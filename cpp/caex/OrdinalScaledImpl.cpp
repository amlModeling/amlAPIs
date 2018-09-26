// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/OrdinalScaledImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OrdinalScaled.hpp"
#include <caex/CaexPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(OrdinalScaledImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void OrdinalScaled::_initialize()
{
    // Supertypes

    // Rerefences

    /*PROTECTED REGION ID(OrdinalScaledImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject OrdinalScaled::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDMAXVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_requiredMaxValue);
    }
        return _any;
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_requiredValue);
    }
        return _any;
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDMINVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_requiredMinValue);
    }
        return _any;

    }
    throw "Error";
}

void OrdinalScaled::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDMAXVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_requiredMaxValue);
    }
        return;
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_requiredValue);
    }
        return;
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDMINVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_requiredMinValue);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean OrdinalScaled::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDMAXVALUE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_requiredMaxValue);
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDVALUE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_requiredValue);
    case ::caex::CaexPackage::ORDINALSCALED__REQUIREDMINVALUE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_requiredMinValue);

    }
    throw "Error";
}

void OrdinalScaled::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr OrdinalScaled::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getOrdinalScaled();
    return _eclass;
}

