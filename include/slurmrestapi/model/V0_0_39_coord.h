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
 * V0_0_39_coord.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_coord_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_coord_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_39_coord
    : public ModelBase
{
public:
    V0_0_39_coord();
    virtual ~V0_0_39_coord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_coord members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isDirect() const;
    bool directIsSet() const;
    void unsetDirect();

    void setDirect(bool value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    bool m_Direct;
    bool m_DirectIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_coord_H_ */
