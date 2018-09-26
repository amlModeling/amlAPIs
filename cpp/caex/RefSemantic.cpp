// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/RefSemantic.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "RefSemantic.hpp"
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
RefSemantic::RefSemantic()
{

    /*PROTECTED REGION ID(RefSemanticImpl__RefSemanticImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

RefSemantic::~RefSemantic()
{
}

/*PROTECTED REGION ID(RefSemantic.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String RefSemantic::getCorrespondingAttributePath() const
{
    return m_correspondingAttributePath;
}

void RefSemantic::setCorrespondingAttributePath(
        ::type::String _correspondingAttributePath)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_correspondingAttributePath = m_correspondingAttributePath;
#endif
    m_correspondingAttributePath = _correspondingAttributePath;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getRefSemantic__correspondingAttributePath(),
                _old_correspondingAttributePath,
                m_correspondingAttributePath
        );
        eNotify(&notification);
    }
#endif
}

// References

