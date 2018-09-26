// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/DescriptionImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Description.hpp"
#include <caex/CaexPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(DescriptionImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Description::_initialize()
{
    // Supertypes

    // Rerefences

    /*PROTECTED REGION ID(DescriptionImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Description::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::DESCRIPTION__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_value);
    }
        return _any;
    case ::caex::CaexPackage::DESCRIPTION__CHANGEMODE:
    {
        ::ecorecpp::mapping::any_traits < ::caex::ChangeMode
                > ::toAny(_any, m_changeMode);
    }
        return _any;

    }
    throw "Error";
}

void Description::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::DESCRIPTION__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_value);
    }
        return;
    case ::caex::CaexPackage::DESCRIPTION__CHANGEMODE:
    {
        ::ecorecpp::mapping::any_traits < ::caex::ChangeMode
                > ::fromAny(_newValue, m_changeMode);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Description::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::DESCRIPTION__VALUE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_value);
    case ::caex::CaexPackage::DESCRIPTION__CHANGEMODE:
        return ::ecorecpp::mapping::set_traits < ::caex::ChangeMode
                > ::is_set(m_changeMode);

    }
    throw "Error";
}

void Description::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Description::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getDescription();
    return _eclass;
}

