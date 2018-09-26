// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Description.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Description.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
Description::Description() :
        m_changeMode()
{

    /*PROTECTED REGION ID(DescriptionImpl__DescriptionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Description::~Description()
{
}

/*PROTECTED REGION ID(Description.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String Description::getValue() const
{
    return m_value;
}

void Description::setValue(::type::String _value)
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
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getDescription__value(),
                _old_value,
                m_value
        );
        eNotify(&notification);
    }
#endif
}

::caex::ChangeMode Description::getChangeMode() const
{
    return m_changeMode;
}

void Description::setChangeMode(::caex::ChangeMode _changeMode)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::caex::ChangeMode _old_changeMode = m_changeMode;
#endif
    m_changeMode = _changeMode;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getDescription__changeMode(),
                _old_changeMode,
                m_changeMode
        );
        eNotify(&notification);
    }
#endif
}

// References

