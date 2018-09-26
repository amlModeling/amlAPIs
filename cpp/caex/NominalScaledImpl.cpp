// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/NominalScaledImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "NominalScaled.hpp"
#include <caex/CaexPackage.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(NominalScaledImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void NominalScaled::_initialize()
{
    // Supertypes

    // Rerefences

    /*PROTECTED REGION ID(NominalScaledImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject NominalScaled::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::NOMINALSCALED__REQUIREDVALUE:
    {
        std::vector < ::ecorecpp::mapping::any > _anys(m_requiredValue.size());
        for (size_t _i = 0; _i < m_requiredValue.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::type::String
                    > ::toAny(_anys[_i], m_requiredValue[_i]);
        _any = _anys;
    }
        return _any;

    }
    throw "Error";
}

void NominalScaled::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::NOMINALSCALED__REQUIREDVALUE:
    {
        ::type::String _t0;
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, _t0);
        ::caex::NominalScaled::addRequiredValue(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean NominalScaled::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::NOMINALSCALED__REQUIREDVALUE:
        return m_requiredValue.size();

    }
    throw "Error";
}

void NominalScaled::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr NominalScaled::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getNominalScaled();
    return _eclass;
}

