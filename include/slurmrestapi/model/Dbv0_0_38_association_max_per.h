/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Dbv0_0_38_association_max_per.h
 *
 * Max per settings
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_max_per_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_max_per_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_38_association_max_per_account.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_38_association_max_per_account;

/// <summary>
/// Max per settings
/// </summary>
class  Dbv0_0_38_association_max_per
    : public ModelBase
{
public:
    Dbv0_0_38_association_max_per();
    virtual ~Dbv0_0_38_association_max_per();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_38_association_max_per members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_38_association_max_per_account> getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const std::shared_ptr<Dbv0_0_38_association_max_per_account>& value);


protected:
    std::shared_ptr<Dbv0_0_38_association_max_per_account> m_Account;
    bool m_AccountIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_38_association_max_per_H_ */