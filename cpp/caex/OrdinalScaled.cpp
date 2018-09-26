// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/OrdinalScaled.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "OrdinalScaled.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
OrdinalScaled::OrdinalScaled()
{

    /*PROTECTED REGION ID(OrdinalScaledImpl__OrdinalScaledImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

OrdinalScaled::~OrdinalScaled()
{
}

/*PROTECTED REGION ID(OrdinalScaled.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String OrdinalScaled::getRequiredMaxValue() const
{
    return m_requiredMaxValue;
}

void OrdinalScaled::setRequiredMaxValue(::type::String _requiredMaxValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_requiredMaxValue = m_requiredMaxValue;
#endif
    m_requiredMaxValue = _requiredMaxValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getOrdinalScaled__requiredMaxValue(),
                _old_requiredMaxValue,
                m_requiredMaxValue
        );
        eNotify(&notification);
    }
#endif
}

::type::String OrdinalScaled::getRequiredValue() const
{
    return m_requiredValue;
}

void OrdinalScaled::setRequiredValue(::type::String _requiredValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_requiredValue = m_requiredValue;
#endif
    m_requiredValue = _requiredValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getOrdinalScaled__requiredValue(),
                _old_requiredValue,
                m_requiredValue
        );
        eNotify(&notification);
    }
#endif
}

::type::String OrdinalScaled::getRequiredMinValue() const
{
    return m_requiredMinValue;
}

void OrdinalScaled::setRequiredMinValue(::type::String _requiredMinValue)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_requiredMinValue = m_requiredMinValue;
#endif
    m_requiredMinValue = _requiredMinValue;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getOrdinalScaled__requiredMinValue(),
                _old_requiredMinValue,
                m_requiredMinValue
        );
        eNotify(&notification);
    }
#endif
}

// References

