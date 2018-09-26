// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Attribute.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Attribute.hpp"
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
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
Attribute::Attribute() :
        m_referenceAttribute(0)
{

    m_refSemantic.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::RefSemantic,
                    -1, true, false >(this, NULL));
    m_constraint.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::AttributeValueRequirement, -1, true, false >(this,
                    NULL));
    m_attribute.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::Attribute, -1,
                    true, false >(this, NULL));

    /*PROTECTED REGION ID(AttributeImpl__AttributeImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Attribute::~Attribute()
{
}

/*PROTECTED REGION ID(Attribute.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String Attribute::getDefaultValue() const
{
    return m_defaultValue;
}

void Attribute::setDefaultValue(::type::String _defaultValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_defaultValue = m_defaultValue;
#endif
    m_defaultValue = _defaultValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttribute__defaultValue(),
                _old_defaultValue,
                m_defaultValue
        );
        eNotify(&notification);
    }
#endif
}

::type::String Attribute::getValue() const
{
    return m_value;
}

void Attribute::setValue(::type::String _value)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_value = m_value;
#endif
    m_value = _value;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttribute__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

::caex::AttributeDataType Attribute::getAttributeDataType() const
{
    return m_attributeDataType;
}

void Attribute::setAttributeDataType(
        ::caex::AttributeDataType _attributeDataType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::caex::AttributeDataType _old_attributeDataType = m_attributeDataType;
#endif
    m_attributeDataType = _attributeDataType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttribute__attributeDataType(),
                _old_attributeDataType,
                m_attributeDataType
        );
        eNotify(&notification);
    }
#endif
}

::type::String Attribute::getRefAttributeType() const
{
    return m_refAttributeType;
}

void Attribute::setRefAttributeType(::type::String _refAttributeType)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_refAttributeType = m_refAttributeType;
#endif
    m_refAttributeType = _refAttributeType;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttribute__refAttributeType(),
                _old_refAttributeType,
                m_refAttributeType
        );
        eNotify(&notification);
    }
#endif
}

::type::String Attribute::getUnit() const
{
    return m_unit;
}

void Attribute::setUnit(::type::String _unit)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_unit = m_unit;
#endif
    m_unit = _unit;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttribute__unit(),
                _old_unit,
                m_unit
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::caex::RefSemantic >& Attribute::getRefSemantic()
{
    return *m_refSemantic;
}

::ecorecpp::mapping::EList< ::caex::AttributeValueRequirement >& Attribute::getConstraint()
{
    return *m_constraint;
}

::ecorecpp::mapping::EList< ::caex::Attribute >& Attribute::getAttribute()
{
    return *m_attribute;
}

::caex::Attribute_ptr Attribute::getReferenceAttribute()
{
    return m_referenceAttribute;
}

void Attribute::setReferenceAttribute(::caex::Attribute_ptr _referenceAttribute)
{
    ::caex::Attribute_ptr _old_referenceAttribute = m_referenceAttribute;

    m_referenceAttribute = _referenceAttribute;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttribute__referenceAttribute(),
                _old_referenceAttribute,
                m_referenceAttribute
        );
        eNotify(&notification);
    }
#endif

}

