// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * anytype/GenericElement.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "GenericElement.hpp"
#include <anytype/Element.hpp>
#include <anytype/GenericElement.hpp>
#include <anytype/GenericAttribute.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "anytype/AnytypePackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::anytype;

// Default constructor
GenericElement::GenericElement()
{

    m_nestedElements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::anytype::GenericElement, -1, true, false >(this, NULL));
    m_attributes.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::anytype::GenericAttribute, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(GenericElementImpl__GenericElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

GenericElement::~GenericElement()
{
}

/*PROTECTED REGION ID(GenericElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
std::vector< ::ecore::EFeatureMapEntry > const& GenericElement::getElementFeatureMap() const
{
    return m_elementFeatureMap;
}

void GenericElement::setElementFeatureMap(
        std::vector< ::ecore::EFeatureMapEntry > _elementFeatureMap)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::ecore::EFeatureMapEntry > _old_elementFeatureMap = m_elementFeatureMap;
#endif
    m_elementFeatureMap = _elementFeatureMap;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::anytype::AnytypePackage::_instance()->getGenericElement__elementFeatureMap(),
                _old_elementFeatureMap,
                m_elementFeatureMap
        );
        eNotify(&notification);
    }
#endif
}

void GenericElement::addElementFeatureMap(
        ::ecore::EFeatureMapEntry const& _new_element_in_elementFeatureMap)
{
    m_elementFeatureMap.push_back(_new_element_in_elementFeatureMap);
}

void GenericElement::setElementFeatureMapAt(size_t _position,
        ::ecore::EFeatureMapEntry const& _new_element_in_elementFeatureMap)
{
    if (_position >= m_elementFeatureMap.size())
        m_elementFeatureMap.resize(_position + 1, 0);

    m_elementFeatureMap[_position] = _new_element_in_elementFeatureMap;
}

void GenericElement::deleteElementFeatureMapAt(size_t _position)
{
    if (_position >= m_elementFeatureMap.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_elementFeatureMap.size() - 1)
        m_elementFeatureMap.resize(_position);
}

std::vector< ::ecore::EFeatureMapEntry > const& GenericElement::getAttributeFeatureMap() const
{
    return m_attributeFeatureMap;
}

void GenericElement::setAttributeFeatureMap(
        std::vector< ::ecore::EFeatureMapEntry > _attributeFeatureMap)
{
#ifdef ECORECPP_NOTIFICATION_API
    std::vector< ::ecore::EFeatureMapEntry > _old_attributeFeatureMap = m_attributeFeatureMap;
#endif
    m_attributeFeatureMap = _attributeFeatureMap;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::anytype::AnytypePackage::_instance()->getGenericElement__attributeFeatureMap(),
                _old_attributeFeatureMap,
                m_attributeFeatureMap
        );
        eNotify(&notification);
    }
#endif
}

void GenericElement::addAttributeFeatureMap(
        ::ecore::EFeatureMapEntry const& _new_element_in_attributeFeatureMap)
{
    m_attributeFeatureMap.push_back(_new_element_in_attributeFeatureMap);
}

void GenericElement::setAttributeFeatureMapAt(size_t _position,
        ::ecore::EFeatureMapEntry const& _new_element_in_attributeFeatureMap)
{
    if (_position >= m_attributeFeatureMap.size())
        m_attributeFeatureMap.resize(_position + 1, 0);

    m_attributeFeatureMap[_position] = _new_element_in_attributeFeatureMap;
}

void GenericElement::deleteAttributeFeatureMapAt(size_t _position)
{
    if (_position >= m_attributeFeatureMap.size())
        throw "Attribute counter out of bounds!";

    // TODO: This is not actually quite true
    if (_position == m_attributeFeatureMap.size() - 1)
        m_attributeFeatureMap.resize(_position);
}

// References
::ecorecpp::mapping::EList< ::anytype::GenericElement >& GenericElement::getNestedElements()
{
    return *m_nestedElements;
}

::ecorecpp::mapping::EList< ::anytype::GenericAttribute >& GenericElement::getAttributes()
{
    return *m_attributes;
}

