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
 * V0_0_40_assoc_shares_obj_wrap_fairshare.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_shares_obj_wrap_fairshare_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_shares_obj_wrap_fairshare_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_assoc_shares_obj_wrap_fairshare
    : public ModelBase
{
public:
    V0_0_40_assoc_shares_obj_wrap_fairshare();
    virtual ~V0_0_40_assoc_shares_obj_wrap_fairshare();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_assoc_shares_obj_wrap_fairshare members

    /// <summary>
    /// Fairshare factor
    /// </summary>
    double getFactor() const;
    bool factorIsSet() const;
    void unsetFactor();

    void setFactor(double value);

    /// <summary>
    /// Fairshare factor at this level; stored on an assoc as a long double, but that is not needed for display in sshare
    /// </summary>
    double getLevel() const;
    bool levelIsSet() const;
    void unsetLevel();

    void setLevel(double value);


protected:
    double m_Factor;
    bool m_FactorIsSet;
    double m_Level;
    bool m_LevelIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_shares_obj_wrap_fairshare_H_ */
