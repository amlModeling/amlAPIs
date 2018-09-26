// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SourceDocumentInformation.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SourceDocumentInformation.hpp"
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
SourceDocumentInformation::SourceDocumentInformation()
{

    /*PROTECTED REGION ID(SourceDocumentInformationImpl__SourceDocumentInformationImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SourceDocumentInformation::~SourceDocumentInformation()
{
}

/*PROTECTED REGION ID(SourceDocumentInformation.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::DateTime SourceDocumentInformation::getLastWritingDateTime() const
{
    return m_lastWritingDateTime;
}

void SourceDocumentInformation::setLastWritingDateTime(
        ::type::DateTime _lastWritingDateTime)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::DateTime _old_lastWritingDateTime = m_lastWritingDateTime;
#endif
    m_lastWritingDateTime = _lastWritingDateTime;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__lastWritingDateTime(),
                _old_lastWritingDateTime,
                m_lastWritingDateTime
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginID() const
{
    return m_originID;
}

void SourceDocumentInformation::setOriginID(::type::String _originID)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originID = m_originID;
#endif
    m_originID = _originID;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originID(),
                _old_originID,
                m_originID
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginName() const
{
    return m_originName;
}

void SourceDocumentInformation::setOriginName(::type::String _originName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originName = m_originName;
#endif
    m_originName = _originName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originName(),
                _old_originName,
                m_originName
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginProjectID() const
{
    return m_originProjectID;
}

void SourceDocumentInformation::setOriginProjectID(
        ::type::String _originProjectID)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originProjectID = m_originProjectID;
#endif
    m_originProjectID = _originProjectID;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originProjectID(),
                _old_originProjectID,
                m_originProjectID
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginProjectTitle() const
{
    return m_originProjectTitle;
}

void SourceDocumentInformation::setOriginProjectTitle(
        ::type::String _originProjectTitle)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originProjectTitle = m_originProjectTitle;
#endif
    m_originProjectTitle = _originProjectTitle;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originProjectTitle(),
                _old_originProjectTitle,
                m_originProjectTitle
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginRelease() const
{
    return m_originRelease;
}

void SourceDocumentInformation::setOriginRelease(::type::String _originRelease)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originRelease = m_originRelease;
#endif
    m_originRelease = _originRelease;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originRelease(),
                _old_originRelease,
                m_originRelease
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginVendor() const
{
    return m_originVendor;
}

void SourceDocumentInformation::setOriginVendor(::type::String _originVendor)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originVendor = m_originVendor;
#endif
    m_originVendor = _originVendor;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originVendor(),
                _old_originVendor,
                m_originVendor
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginVendorURL() const
{
    return m_originVendorURL;
}

void SourceDocumentInformation::setOriginVendorURL(
        ::type::String _originVendorURL)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originVendorURL = m_originVendorURL;
#endif
    m_originVendorURL = _originVendorURL;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originVendorURL(),
                _old_originVendorURL,
                m_originVendorURL
        );
        eNotify(&notification);
    }
#endif
}

::type::String SourceDocumentInformation::getOriginVersion() const
{
    return m_originVersion;
}

void SourceDocumentInformation::setOriginVersion(::type::String _originVersion)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_originVersion = m_originVersion;
#endif
    m_originVersion = _originVersion;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getSourceDocumentInformation__originVersion(),
                _old_originVersion,
                m_originVersion
        );
        eNotify(&notification);
    }
#endif
}

// References

