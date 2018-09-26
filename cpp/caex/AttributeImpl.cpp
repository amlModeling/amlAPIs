// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Attribute.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/RefSemantic.hpp>
#include <caex/AttributeValueRequirement.hpp>
#include <caex/Attribute.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(AttributeImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Attribute::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_refSemantic->size(); i++)
    {
        (*m_refSemantic)[i]->_initialize();
        (*m_refSemantic)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getAttribute__refSemantic());
    }
    for (size_t i = 0; i < m_constraint->size(); i++)
    {
        (*m_constraint)[i]->_initialize();
        (*m_constraint)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getAttribute__constraint());
    }
    for (size_t i = 0; i < m_attribute->size(); i++)
    {
        (*m_attribute)[i]->_initialize();
        (*m_attribute)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getAttribute__attribute());
    }

    /*PROTECTED REGION ID(AttributeImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Attribute::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTE__DEFAULTVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_defaultValue);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_value);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__REFSEMANTIC:
    {
        _any = m_refSemantic->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__CONSTRAINT:
    {
        _any = m_constraint->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTE:
    {
        _any = m_attribute->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTEDATATYPE:
    {
        ::ecorecpp::mapping::any_traits < ::caex::AttributeDataType
                > ::toAny(_any, m_attributeDataType);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__REFATTRIBUTETYPE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refAttributeType);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__UNIT:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_unit);
    }
        return _any;
    case ::caex::CaexPackage::ATTRIBUTE__REFERENCEATTRIBUTE:
    {
        _any = static_cast< ::ecore::EObject* >(m_referenceAttribute);
    }
        return _any;

    }
    throw "Error";
}

void Attribute::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTE__DEFAULTVALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_defaultValue);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__VALUE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_value);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__REFSEMANTIC:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::Attribute::getRefSemantic().clear();
        ::caex::Attribute::getRefSemantic().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__CONSTRAINT:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::Attribute::getConstraint().clear();
        ::caex::Attribute::getConstraint().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::Attribute::getAttribute().clear();
        ::caex::Attribute::getAttribute().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTEDATATYPE:
    {
        ::ecorecpp::mapping::any_traits < ::caex::AttributeDataType
                > ::fromAny(_newValue, m_attributeDataType);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__REFATTRIBUTETYPE:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refAttributeType);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__UNIT:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_unit);
    }
        return;
    case ::caex::CaexPackage::ATTRIBUTE__REFERENCEATTRIBUTE:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::Attribute_ptr _t1 = dynamic_cast< ::caex::Attribute_ptr >(_t0);
        ::caex::Attribute::setReferenceAttribute(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Attribute::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTE__DEFAULTVALUE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_defaultValue);
    case ::caex::CaexPackage::ATTRIBUTE__VALUE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_value);
    case ::caex::CaexPackage::ATTRIBUTE__REFSEMANTIC:
        return m_refSemantic && m_refSemantic->size();
    case ::caex::CaexPackage::ATTRIBUTE__CONSTRAINT:
        return m_constraint && m_constraint->size();
    case ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTE:
        return m_attribute && m_attribute->size();
    case ::caex::CaexPackage::ATTRIBUTE__ATTRIBUTEDATATYPE:
        return ::ecorecpp::mapping::set_traits < ::caex::AttributeDataType
                > ::is_set(m_attributeDataType);
    case ::caex::CaexPackage::ATTRIBUTE__REFATTRIBUTETYPE:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refAttributeType);
    case ::caex::CaexPackage::ATTRIBUTE__UNIT:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_unit);
    case ::caex::CaexPackage::ATTRIBUTE__REFERENCEATTRIBUTE:
        return m_referenceAttribute;

    }
    throw "Error";
}

void Attribute::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Attribute::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getAttribute();
    return _eclass;
}

