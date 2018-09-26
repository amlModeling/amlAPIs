// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SystemUnitClassLibImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SystemUnitClassLib.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/SystemUnitClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(SystemUnitClassLibImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void SystemUnitClassLib::_initialize()
{
    // Supertypes
    ::caex::CAEXObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_systemUnitClass->size(); i++)
    {
        (*m_systemUnitClass)[i]->_initialize();
        (*m_systemUnitClass)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getSystemUnitClassLib__systemUnitClass());
    }

    /*PROTECTED REGION ID(SystemUnitClassLibImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject SystemUnitClassLib::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::SYSTEMUNITCLASSLIB__SYSTEMUNITCLASS:
    {
        _any = m_systemUnitClass->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void SystemUnitClassLib::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SYSTEMUNITCLASSLIB__SYSTEMUNITCLASS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::SystemUnitClassLib::getSystemUnitClass().clear();
        ::caex::SystemUnitClassLib::getSystemUnitClass().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean SystemUnitClassLib::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::SYSTEMUNITCLASSLIB__SYSTEMUNITCLASS:
        return m_systemUnitClass && m_systemUnitClass->size();

    }
    throw "Error";
}

void SystemUnitClassLib::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr SystemUnitClassLib::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getSystemUnitClassLib();
    return _eclass;
}

