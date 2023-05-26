/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_39_pings.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_pings::V0_0_39_pings()
{
    m_MetaIsSet = false;
    m_ErrorsIsSet = false;
    m_WarningsIsSet = false;
    m_PingsIsSet = false;
}

V0_0_39_pings::~V0_0_39_pings()
{
}

void V0_0_39_pings::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_pings::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MetaIsSet)
    {
        val[utility::conversions::to_string_t(U("meta"))] = ModelBase::toJson(m_Meta);
    }
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_WarningsIsSet)
    {
        val[utility::conversions::to_string_t(U("warnings"))] = ModelBase::toJson(m_Warnings);
    }
    if(m_PingsIsSet)
    {
        val[utility::conversions::to_string_t(U("pings"))] = ModelBase::toJson(m_Pings);
    }

    return val;
}

bool V0_0_39_pings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("meta"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("meta")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_39_meta> refVal_setMeta;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMeta);
            setMeta(refVal_setMeta);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_error>> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("warnings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("warnings")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_warning>> refVal_setWarnings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWarnings);
            setWarnings(refVal_setWarnings);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pings")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_39_controller_ping>> refVal_setPings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPings);
            setPings(refVal_setPings);
        }
    }
    return ok;
}

void V0_0_39_pings::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MetaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("meta")), m_Meta));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_WarningsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("warnings")), m_Warnings));
    }
    if(m_PingsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pings")), m_Pings));
    }
}

bool V0_0_39_pings::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("meta"))))
    {
        std::shared_ptr<V0_0_39_meta> refVal_setMeta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("meta"))), refVal_setMeta );
        setMeta(refVal_setMeta);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::vector<std::shared_ptr<V0_0_39_error>> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("warnings"))))
    {
        std::vector<std::shared_ptr<V0_0_39_warning>> refVal_setWarnings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("warnings"))), refVal_setWarnings );
        setWarnings(refVal_setWarnings);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pings"))))
    {
        std::vector<std::shared_ptr<V0_0_39_controller_ping>> refVal_setPings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pings"))), refVal_setPings );
        setPings(refVal_setPings);
    }
    return ok;
}

std::shared_ptr<V0_0_39_meta> V0_0_39_pings::getMeta() const
{
    return m_Meta;
}

void V0_0_39_pings::setMeta(const std::shared_ptr<V0_0_39_meta>& value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}

bool V0_0_39_pings::metaIsSet() const
{
    return m_MetaIsSet;
}

void V0_0_39_pings::unsetMeta()
{
    m_MetaIsSet = false;
}
std::vector<std::shared_ptr<V0_0_39_error>>& V0_0_39_pings::getErrors()
{
    return m_Errors;
}

void V0_0_39_pings::setErrors(const std::vector<std::shared_ptr<V0_0_39_error>>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool V0_0_39_pings::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void V0_0_39_pings::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_39_warning>>& V0_0_39_pings::getWarnings()
{
    return m_Warnings;
}

void V0_0_39_pings::setWarnings(const std::vector<std::shared_ptr<V0_0_39_warning>>& value)
{
    m_Warnings = value;
    m_WarningsIsSet = true;
}

bool V0_0_39_pings::warningsIsSet() const
{
    return m_WarningsIsSet;
}

void V0_0_39_pings::unsetWarnings()
{
    m_WarningsIsSet = false;
}
std::vector<std::shared_ptr<V0_0_39_controller_ping>>& V0_0_39_pings::getPings()
{
    return m_Pings;
}

void V0_0_39_pings::setPings(const std::vector<std::shared_ptr<V0_0_39_controller_ping>>& value)
{
    m_Pings = value;
    m_PingsIsSet = true;
}

bool V0_0_39_pings::pingsIsSet() const
{
    return m_PingsIsSet;
}

void V0_0_39_pings::unsetPings()
{
    m_PingsIsSet = false;
}
}
}
}
}


