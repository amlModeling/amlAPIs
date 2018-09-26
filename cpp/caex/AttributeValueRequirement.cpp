// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/AttributeValueRequirement.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "AttributeValueRequirement.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/OrdinalScaled.hpp>
#include <caex/NominalScaled.hpp>
#include <caex/UnknownType.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
AttributeValueRequirement::AttributeValueRequirement() :
        m_ordinalScaledType(0), m_nominalScaledType(0), m_unknownType(0)
{

    /*PROTECTED REGION ID(AttributeValueRequirementImpl__AttributeValueRequirementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

AttributeValueRequirement::~AttributeValueRequirement()
{
    if (m_ordinalScaledType)
    {
        delete m_ordinalScaledType;
    }
    if (m_nominalScaledType)
    {
        delete m_nominalScaledType;
    }
    if (m_unknownType)
    {
        delete m_unknownType;
    }
}

/*PROTECTED REGION ID(AttributeValueRequirement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String AttributeValueRequirement::getName() const
{
    return m_name;
}

void AttributeValueRequirement::setName(::type::String _name)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_name = m_name;
#endif
    m_name = _name;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeValueRequirement__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References
::caex::OrdinalScaled_ptr AttributeValueRequirement::getOrdinalScaledType()
{
    return m_ordinalScaledType;
}

void AttributeValueRequirement::setOrdinalScaledType(
        ::caex::OrdinalScaled_ptr _ordinalScaledType)
{
    ::caex::OrdinalScaled_ptr _old_ordinalScaledType = m_ordinalScaledType;

    m_ordinalScaledType = _ordinalScaledType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeValueRequirement__ordinalScaledType(),
                _old_ordinalScaledType,
                m_ordinalScaledType
        );
        eNotify(&notification);
    }
#endif

    delete _old_ordinalScaledType;
}

::caex::NominalScaled_ptr AttributeValueRequirement::getNominalScaledType()
{
    return m_nominalScaledType;
}

void AttributeValueRequirement::setNominalScaledType(
        ::caex::NominalScaled_ptr _nominalScaledType)
{
    ::caex::NominalScaled_ptr _old_nominalScaledType = m_nominalScaledType;

    m_nominalScaledType = _nominalScaledType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeValueRequirement__nominalScaledType(),
                _old_nominalScaledType,
                m_nominalScaledType
        );
        eNotify(&notification);
    }
#endif

    delete _old_nominalScaledType;
}

::caex::UnknownType_ptr AttributeValueRequirement::getUnknownType()
{
    return m_unknownType;
}

void AttributeValueRequirement::setUnknownType(
        ::caex::UnknownType_ptr _unknownType)
{
    ::caex::UnknownType_ptr _old_unknownType = m_unknownType;

    m_unknownType = _unknownType;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getAttributeValueRequirement__unknownType(),
                _old_unknownType,
                m_unknownType
        );
        eNotify(&notification);
    }
#endif

    delete _old_unknownType;
}

