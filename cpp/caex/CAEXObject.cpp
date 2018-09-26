// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/CAEXObject.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "CAEXObject.hpp"
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
CAEXObject::CAEXObject()
{

    /*PROTECTED REGION ID(CAEXObjectImpl__CAEXObjectImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

CAEXObject::~CAEXObject()
{
}

/*PROTECTED REGION ID(CAEXObject.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String CAEXObject::getID() const
{
    return m_iD;
}

void CAEXObject::setID(::type::String _iD)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_iD = m_iD;
#endif
    m_iD = _iD;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXObject__iD(),
                _old_iD,
                m_iD
        );
        eNotify(&notification);
    }
#endif
}

::type::String CAEXObject::getName() const
{
    return m_name;
}

void CAEXObject::setName(::type::String _name)
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
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getCAEXObject__name(),
                _old_name,
                m_name
        );
        eNotify(&notification);
    }
#endif
}

// References

