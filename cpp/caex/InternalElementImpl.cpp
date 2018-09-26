// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InternalElementImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InternalElement.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/SystemUnitClass.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
#include <caex/InternalElement.hpp>
#include <caex/SupportedRoleClass.hpp>
#include <caex/InternalLink.hpp>
#include <caex/RoleRequirements.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(InternalElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void InternalElement::_initialize()
{
    // Supertypes
    ::caex::SystemUnitClass::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_roleRequirements->size(); i++)
    {
        (*m_roleRequirements)[i]->_initialize();
        (*m_roleRequirements)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getInternalElement__roleRequirements());
    }

    /*PROTECTED REGION ID(InternalElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InternalElement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERNALELEMENT__ROLEREQUIREMENTS:
    {
        _any = m_roleRequirements->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::INTERNALELEMENT__REFBASESYSTEMUNITPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::toAny(_any, m_refBaseSystemUnitPath);
    }
        return _any;
    case ::caex::CaexPackage::INTERNALELEMENT__BASESYSTEMUNIT:
    {
        _any = static_cast< ::ecore::EObject* >(m_baseSystemUnit);
    }
        return _any;

    }
    throw "Error";
}

void InternalElement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERNALELEMENT__ROLEREQUIREMENTS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::InternalElement::getRoleRequirements().clear();
        ::caex::InternalElement::getRoleRequirements().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::INTERNALELEMENT__REFBASESYSTEMUNITPATH:
    {
        ::ecorecpp::mapping::any_traits < ::type::String
                > ::fromAny(_newValue, m_refBaseSystemUnitPath);
    }
        return;
    case ::caex::CaexPackage::INTERNALELEMENT__BASESYSTEMUNIT:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::caex::SystemUnitClass_ptr _t1 =
                dynamic_cast< ::caex::SystemUnitClass_ptr >(_t0);
        ::caex::InternalElement::setBaseSystemUnit(_t1);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InternalElement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERNALELEMENT__ROLEREQUIREMENTS:
        return m_roleRequirements && m_roleRequirements->size();
    case ::caex::CaexPackage::INTERNALELEMENT__REFBASESYSTEMUNITPATH:
        return ::ecorecpp::mapping::set_traits < ::type::String
                > ::is_set(m_refBaseSystemUnitPath);
    case ::caex::CaexPackage::INTERNALELEMENT__BASESYSTEMUNIT:
        return m_baseSystemUnit;

    }
    throw "Error";
}

void InternalElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InternalElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getInternalElement();
    return _eclass;
}

