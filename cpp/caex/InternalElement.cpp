// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InternalElement.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InternalElement.hpp"
#include <caex/SystemUnitClass.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/Attribute.hpp>
#include <caex/InterfaceClass.hpp>
#include <caex/InternalElement.hpp>
#include <caex/SupportedRoleClass.hpp>
#include <caex/InternalLink.hpp>
#include <caex/RoleRequirements.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
InternalElement::InternalElement() :
        m_baseSystemUnit(0)
{

    m_roleRequirements.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::RoleRequirements, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(InternalElementImpl__InternalElementImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InternalElement::~InternalElement()
{
}

/*PROTECTED REGION ID(InternalElement.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
::type::String InternalElement::getRefBaseSystemUnitPath() const
{
    return m_refBaseSystemUnitPath;
}

void InternalElement::setRefBaseSystemUnitPath(
        ::type::String _refBaseSystemUnitPath)
{
#ifdef ECORECPP_NOTIFICATION_API
    ::type::String _old_refBaseSystemUnitPath = m_refBaseSystemUnitPath;
#endif
    m_refBaseSystemUnitPath = _refBaseSystemUnitPath;
#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInternalElement__refBaseSystemUnitPath(),
                _old_refBaseSystemUnitPath,
                m_refBaseSystemUnitPath
        );
        eNotify(&notification);
    }
#endif
}

// References
::ecorecpp::mapping::EList< ::caex::RoleRequirements >& InternalElement::getRoleRequirements()
{
    return *m_roleRequirements;
}

::caex::SystemUnitClass_ptr InternalElement::getBaseSystemUnit()
{
    return m_baseSystemUnit;
}

void InternalElement::setBaseSystemUnit(
        ::caex::SystemUnitClass_ptr _baseSystemUnit)
{
    ::caex::SystemUnitClass_ptr _old_baseSystemUnit = m_baseSystemUnit;

    m_baseSystemUnit = _baseSystemUnit;

#ifdef ECORECPP_NOTIFICATION_API
    if (eNotificationRequired())
    {
        ::ecorecpp::notify::Notification notification(
                ::ecorecpp::notify::Notification::SET,
                (::ecore::EObject_ptr) this,
                (::ecore::EStructuralFeature_ptr) ::caex::CaexPackage::_instance()->getInternalElement__baseSystemUnit(),
                _old_baseSystemUnit,
                m_baseSystemUnit
        );
        eNotify(&notification);
    }
#endif

}

