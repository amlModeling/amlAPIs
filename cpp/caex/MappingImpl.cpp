// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/MappingImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Mapping.hpp"
#include <caex/CaexPackage.hpp>
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/AttributeNameMapping.hpp>
#include <caex/InterfaceIDMapping.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::caex;

/*PROTECTED REGION ID(MappingImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void Mapping::_initialize()
{
    // Supertypes
    ::caex::CAEXBasicObject::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_attributeNameMapping->size(); i++)
    {
        (*m_attributeNameMapping)[i]->_initialize();
        (*m_attributeNameMapping)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getMapping__attributeNameMapping());
    }
    for (size_t i = 0; i < m_interfaceIDMapping->size(); i++)
    {
        (*m_interfaceIDMapping)[i]->_initialize();
        (*m_interfaceIDMapping)[i]->_setEContainer(this,
                ::caex::CaexPackage::_instance()->getMapping__interfaceIDMapping());
    }

    /*PROTECTED REGION ID(MappingImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Mapping::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::caex::CaexPackage::MAPPING__ATTRIBUTENAMEMAPPING:
    {
        _any = m_attributeNameMapping->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::caex::CaexPackage::MAPPING__INTERFACEIDMAPPING:
    {
        _any = m_interfaceIDMapping->asEListOf< ::ecore::EObject >();
    }
        return _any;

    }
    throw "Error";
}

void Mapping::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::MAPPING__ATTRIBUTENAMEMAPPING:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::Mapping::getAttributeNameMapping().clear();
        ::caex::Mapping::getAttributeNameMapping().insert_all(*_t0);
    }
        return;
    case ::caex::CaexPackage::MAPPING__INTERFACEIDMAPPING:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::caex::Mapping::getInterfaceIDMapping().clear();
        ::caex::Mapping::getInterfaceIDMapping().insert_all(*_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Mapping::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::caex::CaexPackage::MAPPING__ATTRIBUTENAMEMAPPING:
        return m_attributeNameMapping && m_attributeNameMapping->size();
    case ::caex::CaexPackage::MAPPING__INTERFACEIDMAPPING:
        return m_interfaceIDMapping && m_interfaceIDMapping->size();

    }
    throw "Error";
}

void Mapping::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Mapping::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::caex::CaexPackage_ptr >(::caex::CaexPackage::_instance())->getMapping();
    return _eclass;
}

