// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InterfaceClassLibImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InterfaceClassLib.hpp"
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

/*PROTECTED REGION ID(InterfaceClassLibImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void InterfaceClassLib::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_interfaceClass->size(); i++)
    {
        (*m_interfaceClass)[i]->_initialize();
        (*m_interfaceClass)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getInterfaceClassLib__interfaceClass());
    }

    /*PROTECTED REGION ID(InterfaceClassLibImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject InterfaceClassLib::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACECLASSLIB__INTERFACECLASS:
    {
        _any = m_interfaceClass->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void InterfaceClassLib::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACECLASSLIB__INTERFACECLASS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::InterfaceClassLib::getInterfaceClass().clear();
        ::caex::InterfaceClassLib::getInterfaceClass().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean InterfaceClassLib::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::INTERFACECLASSLIB__INTERFACECLASS:
        return m_interfaceClass && m_interfaceClass->size();

    }
    throw "Error";
}

void InterfaceClassLib::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr InterfaceClassLib::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getInterfaceClassLib();
    return _eclass;
}

