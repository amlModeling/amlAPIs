// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/InstanceHierarchy.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "InstanceHierarchy.hpp"
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/InternalElement.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
InstanceHierarchy::InstanceHierarchy()
{

    m_internalElement.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::InternalElement, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(InstanceHierarchyImpl__InstanceHierarchyImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

InstanceHierarchy::~InstanceHierarchy()
{
}

/*PROTECTED REGION ID(InstanceHierarchy.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::ecorecpp::mapping::EList< ::caex::InternalElement >& InstanceHierarchy::getInternalElement()
{
    return *m_internalElement;
}

