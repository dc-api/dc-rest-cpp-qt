/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIApplicationFormPartial.h
 *
 * 
 */

#ifndef OAIApplicationFormPartial_H
#define OAIApplicationFormPartial_H

#include <QJsonObject>

#include "OAIApplicationFormPartial_description.h"
#include "OAIApplicationFormPartial_integration_types_config_value.h"
#include "OAIApplicationOAuth2InstallParams.h"
#include <QMap>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIApplicationFormPartial_description;
class OAIApplicationOAuth2InstallParams;
class OAIApplicationFormPartial_integration_types_config_value;

class OAIApplicationFormPartial : public OAIObject {
public:
    OAIApplicationFormPartial();
    OAIApplicationFormPartial(QString json);
    ~OAIApplicationFormPartial() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIApplicationFormPartial_description getDescription() const;
    void setDescription(const OAIApplicationFormPartial_description &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getIcon() const;
    void setIcon(const QString &icon);
    bool is_icon_Set() const;
    bool is_icon_Valid() const;

    QString getCoverImage() const;
    void setCoverImage(const QString &cover_image);
    bool is_cover_image_Set() const;
    bool is_cover_image_Valid() const;

    QString getTeamId() const;
    void setTeamId(const QString &team_id);
    bool is_team_id_Set() const;
    bool is_team_id_Valid() const;

    qint32 getFlags() const;
    void setFlags(const qint32 &flags);
    bool is_flags_Set() const;
    bool is_flags_Valid() const;

    QString getInteractionsEndpointUrl() const;
    void setInteractionsEndpointUrl(const QString &interactions_endpoint_url);
    bool is_interactions_endpoint_url_Set() const;
    bool is_interactions_endpoint_url_Valid() const;

    qint32 getExplicitContentFilter() const;
    void setExplicitContentFilter(const qint32 &explicit_content_filter);
    bool is_explicit_content_filter_Set() const;
    bool is_explicit_content_filter_Valid() const;

    qint32 getMaxParticipants() const;
    void setMaxParticipants(const qint32 &max_participants);
    bool is_max_participants_Set() const;
    bool is_max_participants_Valid() const;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QSet<QString> getTags() const;
    void setTags(const QSet<QString> &tags);
    bool is_tags_Set() const;
    bool is_tags_Valid() const;

    QString getCustomInstallUrl() const;
    void setCustomInstallUrl(const QString &custom_install_url);
    bool is_custom_install_url_Set() const;
    bool is_custom_install_url_Valid() const;

    OAIApplicationOAuth2InstallParams getInstallParams() const;
    void setInstallParams(const OAIApplicationOAuth2InstallParams &install_params);
    bool is_install_params_Set() const;
    bool is_install_params_Valid() const;

    QString getRoleConnectionsVerificationUrl() const;
    void setRoleConnectionsVerificationUrl(const QString &role_connections_verification_url);
    bool is_role_connections_verification_url_Set() const;
    bool is_role_connections_verification_url_Valid() const;

    QMap<QString, OAIApplicationFormPartial_integration_types_config_value> getIntegrationTypesConfig() const;
    void setIntegrationTypesConfig(const QMap<QString, OAIApplicationFormPartial_integration_types_config_value> &integration_types_config);
    bool is_integration_types_config_Set() const;
    bool is_integration_types_config_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIApplicationFormPartial_description m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_icon;
    bool m_icon_isSet;
    bool m_icon_isValid;

    QString m_cover_image;
    bool m_cover_image_isSet;
    bool m_cover_image_isValid;

    QString m_team_id;
    bool m_team_id_isSet;
    bool m_team_id_isValid;

    qint32 m_flags;
    bool m_flags_isSet;
    bool m_flags_isValid;

    QString m_interactions_endpoint_url;
    bool m_interactions_endpoint_url_isSet;
    bool m_interactions_endpoint_url_isValid;

    qint32 m_explicit_content_filter;
    bool m_explicit_content_filter_isSet;
    bool m_explicit_content_filter_isValid;

    qint32 m_max_participants;
    bool m_max_participants_isSet;
    bool m_max_participants_isValid;

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QSet<QString> m_tags;
    bool m_tags_isSet;
    bool m_tags_isValid;

    QString m_custom_install_url;
    bool m_custom_install_url_isSet;
    bool m_custom_install_url_isValid;

    OAIApplicationOAuth2InstallParams m_install_params;
    bool m_install_params_isSet;
    bool m_install_params_isValid;

    QString m_role_connections_verification_url;
    bool m_role_connections_verification_url_isSet;
    bool m_role_connections_verification_url_isValid;

    QMap<QString, OAIApplicationFormPartial_integration_types_config_value> m_integration_types_config;
    bool m_integration_types_config_isSet;
    bool m_integration_types_config_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIApplicationFormPartial)

#endif // OAIApplicationFormPartial_H
