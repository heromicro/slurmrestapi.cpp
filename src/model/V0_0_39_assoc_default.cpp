/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_39_assoc_default.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_39_assoc_default::V0_0_39_assoc_default()
{
    m_Qos = utility::conversions::to_string_t("");
    m_QosIsSet = false;
}

V0_0_39_assoc_default::~V0_0_39_assoc_default()
{
}

void V0_0_39_assoc_default::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_39_assoc_default::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_QosIsSet)
    {
        val[utility::conversions::to_string_t(U("qos"))] = ModelBase::toJson(m_Qos);
    }

    return val;
}

bool V0_0_39_assoc_default::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("qos"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qos")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setQos;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQos);
            setQos(refVal_setQos);
        }
    }
    return ok;
}

void V0_0_39_assoc_default::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_QosIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qos")), m_Qos));
    }
}

bool V0_0_39_assoc_default::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("qos"))))
    {
        utility::string_t refVal_setQos;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qos"))), refVal_setQos );
        setQos(refVal_setQos);
    }
    return ok;
}

utility::string_t V0_0_39_assoc_default::getQos() const
{
    return m_Qos;
}

void V0_0_39_assoc_default::setQos(const utility::string_t& value)
{
    m_Qos = value;
    m_QosIsSet = true;
}

bool V0_0_39_assoc_default::qosIsSet() const
{
    return m_QosIsSet;
}

void V0_0_39_assoc_default::unsetQos()
{
    m_QosIsSet = false;
}
}
}
}
}


