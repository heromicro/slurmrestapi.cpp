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

/*
 * V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_value.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_value;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner
    : public ModelBase
{
public:
    V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner();
    virtual ~V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner members

    /// <summary>
    /// TRES name
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_value> getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_value>& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_value> m_Value;
    bool m_ValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_shares_resp_shares_shares_inner_tres_run_seconds_inner_H_ */