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
 * V0_0_40_assoc_max_per.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_max_per_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_max_per_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_assoc_max_per_account.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_assoc_max_per_account;


/// <summary>
/// 
/// </summary>
class  V0_0_40_assoc_max_per
    : public ModelBase
{
public:
    V0_0_40_assoc_max_per();
    virtual ~V0_0_40_assoc_max_per();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_assoc_max_per members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_max_per_account> getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const std::shared_ptr<V0_0_40_assoc_max_per_account>& value);


protected:
    std::shared_ptr<V0_0_40_assoc_max_per_account> m_Account;
    bool m_AccountIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_max_per_H_ */
