// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CAEXBasicObject.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CAEXBasicObject.hpp"
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
CAEXBasicObject::CAEXBasicObject() :
        m_changeMode(state), m_description(0), m_version(0), m_copyright(0)
{

    m_revision.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl< ::caex::Revision, -1,
                    true, false >(this, NULL));
    m_additionalInformation.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::AdditionalInformation, -1, true, false >(this,
                    NULL));

    /*PROTECTED REGION ID(CAEXBasicObjectImpl__CAEXBasicObjectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CAEXBasicObject::~CAEXBasicObject()
{
    if (m_description)
    {
        delete m_description;
    }
    if (m_version)
    {
        delete m_version;
    }
    if (m_copyright)
    {
        delete m_copyright;
    }
}

/*PROTECTED REGION ID(CAEXBasicObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::caex::ChangeMode CAEXBasicObject::getChangeMode() const
{
    return m_changeMode;
}

void CAEXBasicObject::setChangeMode(::caex::ChangeMode _changeMode)
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
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXBasicObject__changeMode(),
                _old_changeMode,
                m_changeMode
        );
        eNotify(&notification);
    }
#endif
}

// References
::caex::Description_ptr CAEXBasicObject::getDescription()
{
    return m_description;
}

void CAEXBasicObject::setDescription(::caex::Description_ptr _description)
{
    ::caex::Description_ptr _old_description = m_description;

    m_description = _description;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXBasicObject__description(),
                _old_description,
                m_description
        );
        eNotify(&notification);
    }
#endif

    delete _old_description;
}

::caex::Version_ptr CAEXBasicObject::getVersion()
{
    return m_version;
}

void CAEXBasicObject::setVersion(::caex::Version_ptr _version)
{
    ::caex::Version_ptr _old_version = m_version;

    m_version = _version;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXBasicObject__version(),
                _old_version,
                m_version
        );
        eNotify(&notification);
    }
#endif

    delete _old_version;
}

::ecorecpp::mapping::EList< ::caex::Revision >& CAEXBasicObject::getRevision()
{
    return *m_revision;
}

::caex::Copyright_ptr CAEXBasicObject::getCopyright()
{
    return m_copyright;
}

void CAEXBasicObject::setCopyright(::caex::Copyright_ptr _copyright)
{
    ::caex::Copyright_ptr _old_copyright = m_copyright;

    m_copyright = _copyright;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXBasicObject__copyright(),
                _old_copyright,
                m_copyright
        );
        eNotify(&notification);
    }
#endif

    delete _old_copyright;
}

::ecorecpp::mapping::EList< ::caex::AdditionalInformation >& CAEXBasicObject::getAdditionalInformation()
{
    return *m_additionalInformation;
}

