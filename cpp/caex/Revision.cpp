// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Revision.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Revision.hpp"
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
Revision::Revision()
{

    /*PROTECTED REGION ID(RevisionImpl__RevisionImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Revision::~Revision()
{
}

/*PROTECTED REGION ID(Revision.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::DateTime Revision::getRevisionDate() const
{
    return m_revisionDate;
}

void Revision::setRevisionDate(::type::DateTime _revisionDate)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::DateTime _old_revisionDate = m_revisionDate;
#endif
    m_revisionDate = _revisionDate;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRevision__revisionDate(),
                _old_revisionDate,
                m_revisionDate
        );
        eNotify(&notification);
    }
#endif
}

::type::String Revision::getOldVersion() const
{
    return m_oldVersion;
}

void Revision::setOldVersion(::type::String _oldVersion)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_oldVersion = m_oldVersion;
#endif
    m_oldVersion = _oldVersion;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRevision__oldVersion(),
                _old_oldVersion,
                m_oldVersion
        );
        eNotify(&notification);
    }
#endif
}

::type::String Revision::getNewVersion() const
{
    return m_newVersion;
}

void Revision::setNewVersion(::type::String _newVersion)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_newVersion = m_newVersion;
#endif
    m_newVersion = _newVersion;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRevision__newVersion(),
                _old_newVersion,
                m_newVersion
        );
        eNotify(&notification);
    }
#endif
}

::type::String Revision::getAuthorName() const
{
    return m_authorName;
}

void Revision::setAuthorName(::type::String _authorName)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_authorName = m_authorName;
#endif
    m_authorName = _authorName;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRevision__authorName(),
                _old_authorName,
                m_authorName
        );
        eNotify(&notification);
    }
#endif
}

::type::String Revision::getComment() const
{
    return m_comment;
}

void Revision::setComment(::type::String _comment)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_comment = m_comment;
#endif
    m_comment = _comment;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRevision__comment(),
                _old_comment,
                m_comment
        );
        eNotify(&notification);
    }
#endif
}

// References

