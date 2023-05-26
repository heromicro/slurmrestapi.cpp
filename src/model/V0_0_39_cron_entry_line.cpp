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



#include "slurmrestapi/model/V0_0_39_cron_entry_line.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_39_cron_entry_line::V0_0_39_cron_entry_line()
{
    m_End = 0;
    m_EndIsSet = false;
}

V0_0_39_cron_entry_line::~V0_0_39_cron_entry_line()
{
}

void V0_0_39_cron_entry_line::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_cron_entry_line::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EndIsSet)
    {
        val[utility::conversions::to_string_t(U("end"))] = ModelBase::toJson(m_End);
    }

    return val;
}

bool V0_0_39_cron_entry_line::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("end"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("end")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setEnd;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnd);
            setEnd(refVal_setEnd);
        }
    }
    return ok;
}

void V0_0_39_cron_entry_line::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_EndIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("end")), m_End));
    }
}

bool V0_0_39_cron_entry_line::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("end"))))
    {
        int32_t refVal_setEnd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("end"))), refVal_setEnd );
        setEnd(refVal_setEnd);
    }
    return ok;
}

int32_t V0_0_39_cron_entry_line::getEnd() const
{
    return m_End;
}

void V0_0_39_cron_entry_line::setEnd(int32_t value)
{
    m_End = value;
    m_EndIsSet = true;
}

bool V0_0_39_cron_entry_line::endIsSet() const
{
    return m_EndIsSet;
}

void V0_0_39_cron_entry_line::unsetEnd()
{
    m_EndIsSet = false;
}
}
}
}
}

