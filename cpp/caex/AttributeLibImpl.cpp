// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeLibImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeLib.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXObject.hpp>
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

/*PROTECTED REGION ID(AttributeLibImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void AttributeLib::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_attributeType->size(); i++)
    {
        (*m_attributeType)[i]->_initialize();
        (*m_attributeType)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getAttributeLib__attributeType());
    }

    /*PROTECTED REGION ID(AttributeLibImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject AttributeLib::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTELIB__ATTRIBUTETYPE:
    {
        _any = m_attributeType->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void AttributeLib::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTELIB__ATTRIBUTETYPE:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::AttributeLib::getAttributeType().clear();
        ::caex::AttributeLib::getAttributeType().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean AttributeLib::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::ATTRIBUTELIB__ATTRIBUTETYPE:
        return m_attributeType && m_attributeType->size();

    }
    throw "Error";
}

void AttributeLib::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr AttributeLib::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getAttributeLib();
    return _eclass;
}

