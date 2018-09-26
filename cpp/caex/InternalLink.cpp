// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InternalLink.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InternalLink.hpp"
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/InterfaceClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
InternalLink::InternalLink() :
        m_partnerSideA(0), m_partnerSideB(0)
{

    /*PROTECTED REGION ID(InternalLinkImpl__InternalLinkImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InternalLink::~InternalLink()
{
}

/*PROTECTED REGION ID(InternalLink.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String InternalLink::getRefPartnerSideA() const
{
    return m_refPartnerSideA;
}

void InternalLink::setRefPartnerSideA(::type::String _refPartnerSideA)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_refPartnerSideA = m_refPartnerSideA;
#endif
    m_refPartnerSideA = _refPartnerSideA;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInternalLink__refPartnerSideA(),
                _old_refPartnerSideA,
                m_refPartnerSideA
        );
        eNotify(&notification);
    }
#endif
}

::type::String InternalLink::getRefPartnerSideB() const
{
    return m_refPartnerSideB;
}

void InternalLink::setRefPartnerSideB(::type::String _refPartnerSideB)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_refPartnerSideB = m_refPartnerSideB;
#endif
    m_refPartnerSideB = _refPartnerSideB;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInternalLink__refPartnerSideB(),
                _old_refPartnerSideB,
                m_refPartnerSideB
        );
        eNotify(&notification);
    }
#endif
}

// References
::caex::InterfaceClass_ptr InternalLink::getPartnerSideA()
{
    return m_partnerSideA;
}

void InternalLink::setPartnerSideA(::caex::InterfaceClass_ptr _partnerSideA)
{
    ::caex::InterfaceClass_ptr _old_partnerSideA = m_partnerSideA;

    m_partnerSideA = _partnerSideA;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInternalLink__partnerSideA(),
                _old_partnerSideA,
                m_partnerSideA
        );
        eNotify(&notification);
    }
#endif

}

::caex::InterfaceClass_ptr InternalLink::getPartnerSideB()
{
    return m_partnerSideB;
}

void InternalLink::setPartnerSideB(::caex::InterfaceClass_ptr _partnerSideB)
{
    ::caex::InterfaceClass_ptr _old_partnerSideB = m_partnerSideB;

    m_partnerSideB = _partnerSideB;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInternalLink__partnerSideB(),
                _old_partnerSideB,
                m_partnerSideB
        );
        eNotify(&notification);
    }
#endif

}

