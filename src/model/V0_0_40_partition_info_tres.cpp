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



#include "slurmrestapi/model/V0_0_40_partition_info_tres.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_partition_info_tres::V0_0_40_partition_info_tres()
{
    m_Billing_weights = utility::conversions::to_string_t("");
    m_Billing_weightsIsSet = false;
    m_Configured = utility::conversions::to_string_t("");
    m_ConfiguredIsSet = false;
}

V0_0_40_partition_info_tres::~V0_0_40_partition_info_tres()
{
}

void V0_0_40_partition_info_tres::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_partition_info_tres::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Billing_weightsIsSet)
    {
        val[utility::conversions::to_string_t(U("billing_weights"))] = ModelBase::toJson(m_Billing_weights);
    }
    if(m_ConfiguredIsSet)
    {
        val[utility::conversions::to_string_t(U("configured"))] = ModelBase::toJson(m_Configured);
    }

    return val;
}

bool V0_0_40_partition_info_tres::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("billing_weights"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("billing_weights")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBillingWeights;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBillingWeights);
            setBillingWeights(refVal_setBillingWeights);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("configured"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("configured")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConfigured;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConfigured);
            setConfigured(refVal_setConfigured);
        }
    }
    return ok;
}

void V0_0_40_partition_info_tres::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Billing_weightsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("billing_weights")), m_Billing_weights));
    }
    if(m_ConfiguredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("configured")), m_Configured));
    }
}

bool V0_0_40_partition_info_tres::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("billing_weights"))))
    {
        utility::string_t refVal_setBillingWeights;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("billing_weights"))), refVal_setBillingWeights );
        setBillingWeights(refVal_setBillingWeights);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("configured"))))
    {
        utility::string_t refVal_setConfigured;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("configured"))), refVal_setConfigured );
        setConfigured(refVal_setConfigured);
    }
    return ok;
}

utility::string_t V0_0_40_partition_info_tres::getBillingWeights() const
{
    return m_Billing_weights;
}

void V0_0_40_partition_info_tres::setBillingWeights(const utility::string_t& value)
{
    m_Billing_weights = value;
    m_Billing_weightsIsSet = true;
}

bool V0_0_40_partition_info_tres::billingWeightsIsSet() const
{
    return m_Billing_weightsIsSet;
}

void V0_0_40_partition_info_tres::unsetBilling_weights()
{
    m_Billing_weightsIsSet = false;
}
utility::string_t V0_0_40_partition_info_tres::getConfigured() const
{
    return m_Configured;
}

void V0_0_40_partition_info_tres::setConfigured(const utility::string_t& value)
{
    m_Configured = value;
    m_ConfiguredIsSet = true;
}

bool V0_0_40_partition_info_tres::configuredIsSet() const
{
    return m_ConfiguredIsSet;
}

void V0_0_40_partition_info_tres::unsetConfigured()
{
    m_ConfiguredIsSet = false;
}
}
}
}
}


