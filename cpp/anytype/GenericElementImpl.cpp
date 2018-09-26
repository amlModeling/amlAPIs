// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/GenericElementImpl.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "GenericElement.hpp"
#include <anytype/AnytypePackage.hpp>
#include <anytype/Element.hpp>
#include <anytype/GenericElement.hpp>
#include <anytype/GenericAttribute.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

using namespace ::anytype;

/*PROTECTED REGION ID(GenericElementImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

void GenericElement::_initialize()
{
    // Supertypes
    ::anytype::Element::_initialize();

    // Rerefences
    for (size_t i = 0; i < m_nestedElements->size(); i++)
    {
        (*m_nestedElements)[i]->_initialize();
        (*m_nestedElements)[i]->_setEContainer(this,
                ::anytype::AnytypePackage::_instance()->getGenericElement__nestedElements());
    }
    for (size_t i = 0; i < m_attributes->size(); i++)
    {
        (*m_attributes)[i]->_initialize();
        (*m_attributes)[i]->_setEContainer(this,
                ::anytype::AnytypePackage::_instance()->getGenericElement__attributes());
    }

    /*PROTECTED REGION ID(GenericElementImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject GenericElement::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::anytype::AnytypePackage::GENERICELEMENT__NESTEDELEMENTS:
    {
        _any = m_nestedElements->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTES:
    {
        _any = m_attributes->asEListOf< ::ecore::EObject >();
    }
        return _any;
    case ::anytype::AnytypePackage::GENERICELEMENT__ELEMENTFEATUREMAP:
    {
        std::vector < ::ecorecpp::mapping::any
                > _anys(m_elementFeatureMap.size());
        for (size_t _i = 0; _i < m_elementFeatureMap.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], m_elementFeatureMap[_i]);
        _any = _anys;
    }
        return _any;
    case ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTEFEATUREMAP:
    {
        std::vector < ::ecorecpp::mapping::any
                > _anys(m_attributeFeatureMap.size());
        for (size_t _i = 0; _i < m_attributeFeatureMap.size(); _i++)
            ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                    > ::toAny(_anys[_i], m_attributeFeatureMap[_i]);
        _any = _anys;
    }
        return _any;

    }
    throw "Error";
}

void GenericElement::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::anytype::AnytypePackage::GENERICELEMENT__NESTEDELEMENTS:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::anytype::GenericElement::getNestedElements().clear();
        ::anytype::GenericElement::getNestedElements().insert_all(*_t0);
    }
        return;
    case ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTES:
    {
        ::ecorecpp::mapping::EList_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecorecpp::mapping::EList_ptr > (_newValue);
        ::anytype::GenericElement::getAttributes().clear();
        ::anytype::GenericElement::getAttributes().insert_all(*_t0);
    }
        return;
    case ::anytype::AnytypePackage::GENERICELEMENT__ELEMENTFEATUREMAP:
    {
        ::ecore::EFeatureMapEntry _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                > ::fromAny(_newValue, _t0);
        ::anytype::GenericElement::addElementFeatureMap(_t0);
    }
        return;
    case ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTEFEATUREMAP:
    {
        ::ecore::EFeatureMapEntry _t0;
        ::ecorecpp::mapping::any_traits < ::ecore::EFeatureMapEntry
                > ::fromAny(_newValue, _t0);
        ::anytype::GenericElement::addAttributeFeatureMap(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean GenericElement::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::anytype::AnytypePackage::GENERICELEMENT__NESTEDELEMENTS:
        return m_nestedElements && m_nestedElements->size();
    case ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTES:
        return m_attributes && m_attributes->size();
    case ::anytype::AnytypePackage::GENERICELEMENT__ELEMENTFEATUREMAP:
        return m_elementFeatureMap.size();
    case ::anytype::AnytypePackage::GENERICELEMENT__ATTRIBUTEFEATUREMAP:
        return m_attributeFeatureMap.size();

    }
    throw "Error";
}

void GenericElement::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr GenericElement::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::anytype::AnytypePackage_ptr >(::anytype::AnytypePackage::_instance())->getGenericElement();
    return _eclass;
}

