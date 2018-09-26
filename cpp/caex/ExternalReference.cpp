// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/ExternalReference.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "ExternalReference.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
ExternalReference::ExternalReference()
{

    /*PROTECTED REGION ID(ExternalReferenceImpl__ExternalReferenceImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

ExternalReference::~ExternalReference()
{
}

/*PROTECTED REGION ID(ExternalReference.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String ExternalReference::getAlias() const
{
    return m_alias;
}

void ExternalReference::setAlias(::type::String _alias)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_alias = m_alias;
#endif
    m_alias = _alias;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getExternalReference__alias(),
                _old_alias,
                m_alias
        );
        eNotify(&notification);
    }
#endif
}

::type::String ExternalReference::getPath() const
{
    return m_path;
}

void ExternalReference::setPath(::type::String _path)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_path = m_path;
#endif
    m_path = _path;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getExternalReference__path(),
                _old_path,
                m_path
        );
        eNotify(&notification);
    }
#endif
}

// References

