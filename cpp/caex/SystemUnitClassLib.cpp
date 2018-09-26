// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * caex/SystemUnitClassLib.cpp
 * This file was created by EMF4CPP 1.1.0 and is copyrighted by the
 * respective user and/or provider of the processed ECORE model.
 *
 * EMF4CPP is free software. You can obtain it from
 * https://github.com/catedrasaes-umu/emf4cpp
 */

#include "SystemUnitClassLib.hpp"
#include <caex/CAEXObject.hpp>
#include <caex/Description.hpp>
#include <caex/Version.hpp>
#include <caex/Revision.hpp>
#include <caex/Copyright.hpp>
#include <caex/AdditionalInformation.hpp>
#include <caex/SystemUnitClass.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include "caex/CaexPackage.hpp"
#include <ecorecpp/mapping.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#include <ecorecpp/notify.hpp>
#endif

using namespace ::caex;

// Default constructor
SystemUnitClassLib::SystemUnitClassLib()
{

    m_systemUnitClass.reset(
            new ::ecorecpp::mapping::ReferenceEListImpl<
                    ::caex::SystemUnitClass, -1, true, false >(this, NULL));

    /*PROTECTED REGION ID(SystemUnitClassLibImpl__SystemUnitClassLibImpl) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

#ifdef ECORECPP_NOTIFICATION_API
    m_eDeliver = false;
#endif
}

SystemUnitClassLib::~SystemUnitClassLib()
{
}

/*PROTECTED REGION ID(SystemUnitClassLib.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

// Attributes
// References
::ecorecpp::mapping::EList< ::caex::SystemUnitClass >& SystemUnitClassLib::getSystemUnitClass()
{
    return *m_systemUnitClass;
}

