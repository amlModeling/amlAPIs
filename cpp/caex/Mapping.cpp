// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/Mapping.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "Mapping.hpp"
#include <caex/CAEXBasicObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/AttributeNameMapping.hpp>
#include <caex/InterfaceIDMapping.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
Mapping::Mapping()
{

    m_attributeNameMapping.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::AttributeNameMapping, -1, true, false >(this,
                    NULL));
    m_interfaceIDMapping.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::InterfaceIDMapping, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(MappingImpl__MappingImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

Mapping::~Mapping()
{
}

/*PROTECTED REGION ID(Mapping.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::ecorecpp::mapping::EList< ::caex::AttributeNameMapping >& Mapping::getAttributeNameMapping()
{
    return *m_attributeNameMapping;
}

::ecorecpp::mapping::EList< ::caex::InterfaceIDMapping >& Mapping::getInterfaceIDMapping()
{
    return *m_interfaceIDMapping;
}

