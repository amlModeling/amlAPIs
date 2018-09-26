// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/ElementImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Element.hpp"
#include <anytype/AnytypePackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::anytype;

/*PROTECTED REGION ID(ElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Element::_initialize()
{
    // Supertypes

    // Rerefences

    /*PROTECTED REGION ID(ElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Element::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::anytype::AnytypePackage::ELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_name);
    }
        return _any;
    case ::anytype::AnytypePackage::ELEMENT__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::toAny(_any, m_value);
    }
        return _any;

    }
    throw "Error";
}

void Element::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::anytype::AnytypePackage::ELEMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_name);
    }
        return;
    case ::anytype::AnytypePackage::ELEMENT__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::ecore::EString
                > ::fromAny(_newValue, m_value);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Element::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::anytype::AnytypePackage::ELEMENT__NAME:
        return std::string("").compare(m_name) != 0;
    case ::anytype::AnytypePackage::ELEMENT__VALUE:
        return std::string("").compare(m_value) != 0;

    }
    throw "Error";
}

void Element::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Element::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::anytype::AnytypePackage_ptr >(::anytype::AnytypePackage::_instance())->getElement();
    return _eclass;
}

