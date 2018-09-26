// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeNameMappingImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeNameMapping.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(AttributeNameMappingImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void AttributeNameMapping::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences

    /*PROTECTED REGION ID(AttributeNameMappingImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AttributeNameMapping::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_roleAttributeName);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_systemUnitAttributeName);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTE:
    {
        _any = static_cast< ::ecore::EObject* >(m_roleAttribute);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTE:
    {
        _any = static_cast< ::ecore::EObject* >(m_systemUnitAttribute);
    }
        return _any;

    }
    throw "Error";
}

void AttributeNameMapping::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_roleAttributeName);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTENAME:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_systemUnitAttributeName);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Attribute_ptr _t1 = dynamic_cast< ::caex::Attribute_ptr >(_t0);
        ::caex::AttributeNameMapping::setRoleAttribute(_t1);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Attribute_ptr _t1 = dynamic_cast< ::caex::Attribute_ptr >(_t0);
        ::caex::AttributeNameMapping::setSystemUnitAttribute(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AttributeNameMapping::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTENAME:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_roleAttributeName);
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTENAME:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_systemUnitAttributeName);
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__ROLEATTRIBUTE:
        return m_roleAttribute;
    case ::caex::CaexPackage::ATTRIBUTENAMEMAPPING__SYSTEMUNITATTRIBUTE:
        return m_systemUnitAttribute;

    }
    throw "Error";
}

void AttributeNameMapping::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AttributeNameMapping::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getAttributeNameMapping();
    return _eclass;
}

