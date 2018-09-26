// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeValueRequirementImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeValueRequirement.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/OrdinalScaled.hpp>
#include <caex/NominalScaled.hpp>
#include <caex/UnknownType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(AttributeValueRequirementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void AttributeValueRequirement::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences
    if (m_ordinalScaledType)
    {
        m_ordinalScaledType->_initialize();
        m_ordinalScaledType->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getAttributeValueRequirement__ordinalScaledType());
    }
    if (m_nominalScaledType)
    {
        m_nominalScaledType->_initialize();
        m_nominalScaledType->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getAttributeValueRequirement__nominalScaledType());
    }
    if (m_unknownType)
    {
        m_unknownType->_initialize();
        m_unknownType->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getAttributeValueRequirement__unknownType());
    }

    /*PROTECTED REGION ID(AttributeValueRequirementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AttributeValueRequirement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__ORDINALSCALEDTYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_ordinalScaledType);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NOMINALSCALEDTYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_nominalScaledType);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__UNKNOWNTYPE:
    {
        _any = static_cast< ::ecore::EObject* >(m_unknownType);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_name);
    }
        return _any;

    }
    throw "Error";
}

void AttributeValueRequirement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__ORDINALSCALEDTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::OrdinalScaled_ptr _t1 =
                dynamic_cast< ::caex::OrdinalScaled_ptr >(_t0);
        ::caex::AttributeValueRequirement::setOrdinalScaledType(_t1);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NOMINALSCALEDTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::NominalScaled_ptr _t1 =
                dynamic_cast< ::caex::NominalScaled_ptr >(_t0);
        ::caex::AttributeValueRequirement::setNominalScaledType(_t1);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__UNKNOWNTYPE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::UnknownType_ptr _t1 =
                dynamic_cast< ::caex::UnknownType_ptr >(_t0);
        ::caex::AttributeValueRequirement::setUnknownType(_t1);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_name);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AttributeValueRequirement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__ORDINALSCALEDTYPE:
        return m_ordinalScaledType;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NOMINALSCALEDTYPE:
        return m_nominalScaledType;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__UNKNOWNTYPE:
        return m_unknownType;
    case ::caex::CaexPackage::ATTRIBUTEVALUEREQUIREMENT__NAME:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_name);

    }
    throw "Error";
}

void AttributeValueRequirement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AttributeValueRequirement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getAttributeValueRequirement();
    return _eclass;
}

