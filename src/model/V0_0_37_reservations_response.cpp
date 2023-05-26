/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_37_reservations_response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_37_reservations_response::V0_0_37_reservations_response()
{
    m_ErrorsIsSet = false;
    m_ReservationsIsSet = false;
}

V0_0_37_reservations_response::~V0_0_37_reservations_response()
{
}

void V0_0_37_reservations_response::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_37_reservations_response::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_ReservationsIsSet)
    {
        val[utility::conversions::to_string_t(U("reservations"))] = ModelBase::toJson(m_Reservations);
    }

    return val;
}

bool V0_0_37_reservations_response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_37_error>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reservations"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reservations")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_37_reservation>> refVal_setReservations;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReservations);
            setReservations(refVal_setReservations);
        }
    }
    return ok;
}

void V0_0_37_reservations_response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_ReservationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reservations")), m_Reservations));
    }
}

bool V0_0_37_reservations_response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<V0_0_37_error>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reservations"))))
    {
        std::vector<std::shared_ptr<V0_0_37_reservation>> refVal_setReservations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reservations"))), refVal_setReservations );
        setReservations(refVal_setReservations);
    }
    return ok;
}

std::vector<std::shared_ptr<V0_0_37_error>>& V0_0_37_reservations_response::getErrors()
{
    return m_Errors;
}

void V0_0_37_reservations_response::setErrors(const std::vector<std::shared_ptr<V0_0_37_error>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool V0_0_37_reservations_response::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void V0_0_37_reservations_response::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_37_reservation>>& V0_0_37_reservations_response::getReservations()
{
    return m_Reservations;
}

void V0_0_37_reservations_response::setReservations(const std::vector<std::shared_ptr<V0_0_37_reservation>>& value)
{
    m_Reservations = value;
    m_ReservationsIsSet = true;
}

bool V0_0_37_reservations_response::reservationsIsSet() const
{
    return m_ReservationsIsSet;
}

void V0_0_37_reservations_response::unsetReservations()
{
    m_ReservationsIsSet = false;
}
}
}
}
}


