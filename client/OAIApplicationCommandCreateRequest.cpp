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

#include "OAIApplicationCommandCreateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIApplicationCommandCreateRequest::OAIApplicationCommandCreateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApplicationCommandCreateRequest::OAIApplicationCommandCreateRequest() {
    this->initializeModel();
}

OAIApplicationCommandCreateRequest::~OAIApplicationCommandCreateRequest() {}

void OAIApplicationCommandCreateRequest::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_name_localizations_isSet = false;
    m_name_localizations_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_description_localizations_isSet = false;
    m_description_localizations_isValid = false;

    m_options_isSet = false;
    m_options_isValid = false;

    m_default_member_permissions_isSet = false;
    m_default_member_permissions_isValid = false;

    m_dm_permission_isSet = false;
    m_dm_permission_isValid = false;

    m_contexts_isSet = false;
    m_contexts_isValid = false;

    m_integration_types_isSet = false;
    m_integration_types_isValid = false;

    m_handler_isSet = false;
    m_handler_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void OAIApplicationCommandCreateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApplicationCommandCreateRequest::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::dc_rest::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_name_localizations_isValid = ::dc_rest::fromJsonValue(m_name_localizations, json[QString("name_localizations")]);
    m_name_localizations_isSet = !json[QString("name_localizations")].isNull() && m_name_localizations_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_description_localizations_isValid = ::dc_rest::fromJsonValue(m_description_localizations, json[QString("description_localizations")]);
    m_description_localizations_isSet = !json[QString("description_localizations")].isNull() && m_description_localizations_isValid;

    m_options_isValid = ::dc_rest::fromJsonValue(m_options, json[QString("options")]);
    m_options_isSet = !json[QString("options")].isNull() && m_options_isValid;

    m_default_member_permissions_isValid = ::dc_rest::fromJsonValue(m_default_member_permissions, json[QString("default_member_permissions")]);
    m_default_member_permissions_isSet = !json[QString("default_member_permissions")].isNull() && m_default_member_permissions_isValid;

    m_dm_permission_isValid = ::dc_rest::fromJsonValue(m_dm_permission, json[QString("dm_permission")]);
    m_dm_permission_isSet = !json[QString("dm_permission")].isNull() && m_dm_permission_isValid;

    m_contexts_isValid = ::dc_rest::fromJsonValue(m_contexts, json[QString("contexts")]);
    m_contexts_isSet = !json[QString("contexts")].isNull() && m_contexts_isValid;

    m_integration_types_isValid = ::dc_rest::fromJsonValue(m_integration_types, json[QString("integration_types")]);
    m_integration_types_isSet = !json[QString("integration_types")].isNull() && m_integration_types_isValid;

    m_handler_isValid = ::dc_rest::fromJsonValue(m_handler, json[QString("handler")]);
    m_handler_isSet = !json[QString("handler")].isNull() && m_handler_isValid;

    m_type_isValid = ::dc_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString OAIApplicationCommandCreateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApplicationCommandCreateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::dc_rest::toJsonValue(m_name));
    }
    if (m_name_localizations.size() > 0) {
        obj.insert(QString("name_localizations"), ::dc_rest::toJsonValue(m_name_localizations));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_description_localizations.size() > 0) {
        obj.insert(QString("description_localizations"), ::dc_rest::toJsonValue(m_description_localizations));
    }
    if (m_options.size() > 0) {
        obj.insert(QString("options"), ::dc_rest::toJsonValue(m_options));
    }
    if (m_default_member_permissions_isSet) {
        obj.insert(QString("default_member_permissions"), ::dc_rest::toJsonValue(m_default_member_permissions));
    }
    if (m_dm_permission_isSet) {
        obj.insert(QString("dm_permission"), ::dc_rest::toJsonValue(m_dm_permission));
    }
    if (m_contexts.size() > 0) {
        obj.insert(QString("contexts"), ::dc_rest::toJsonValue(m_contexts));
    }
    if (m_integration_types.size() > 0) {
        obj.insert(QString("integration_types"), ::dc_rest::toJsonValue(m_integration_types));
    }
    if (m_handler_isSet) {
        obj.insert(QString("handler"), ::dc_rest::toJsonValue(m_handler));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::dc_rest::toJsonValue(m_type));
    }
    return obj;
}

QString OAIApplicationCommandCreateRequest::getName() const {
    return m_name;
}
void OAIApplicationCommandCreateRequest::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAIApplicationCommandCreateRequest::is_name_Valid() const{
    return m_name_isValid;
}

QMap<QString, QString> OAIApplicationCommandCreateRequest::getNameLocalizations() const {
    return m_name_localizations;
}
void OAIApplicationCommandCreateRequest::setNameLocalizations(const QMap<QString, QString> &name_localizations) {
    m_name_localizations = name_localizations;
    m_name_localizations_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_name_localizations_Set() const{
    return m_name_localizations_isSet;
}

bool OAIApplicationCommandCreateRequest::is_name_localizations_Valid() const{
    return m_name_localizations_isValid;
}

QString OAIApplicationCommandCreateRequest::getDescription() const {
    return m_description;
}
void OAIApplicationCommandCreateRequest::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_description_Set() const{
    return m_description_isSet;
}

bool OAIApplicationCommandCreateRequest::is_description_Valid() const{
    return m_description_isValid;
}

QMap<QString, QString> OAIApplicationCommandCreateRequest::getDescriptionLocalizations() const {
    return m_description_localizations;
}
void OAIApplicationCommandCreateRequest::setDescriptionLocalizations(const QMap<QString, QString> &description_localizations) {
    m_description_localizations = description_localizations;
    m_description_localizations_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_description_localizations_Set() const{
    return m_description_localizations_isSet;
}

bool OAIApplicationCommandCreateRequest::is_description_localizations_Valid() const{
    return m_description_localizations_isValid;
}

QList<OAIApplicationCommandCreateRequest_options_inner> OAIApplicationCommandCreateRequest::getOptions() const {
    return m_options;
}
void OAIApplicationCommandCreateRequest::setOptions(const QList<OAIApplicationCommandCreateRequest_options_inner> &options) {
    m_options = options;
    m_options_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_options_Set() const{
    return m_options_isSet;
}

bool OAIApplicationCommandCreateRequest::is_options_Valid() const{
    return m_options_isValid;
}

qint32 OAIApplicationCommandCreateRequest::getDefaultMemberPermissions() const {
    return m_default_member_permissions;
}
void OAIApplicationCommandCreateRequest::setDefaultMemberPermissions(const qint32 &default_member_permissions) {
    m_default_member_permissions = default_member_permissions;
    m_default_member_permissions_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_default_member_permissions_Set() const{
    return m_default_member_permissions_isSet;
}

bool OAIApplicationCommandCreateRequest::is_default_member_permissions_Valid() const{
    return m_default_member_permissions_isValid;
}

bool OAIApplicationCommandCreateRequest::isDmPermission() const {
    return m_dm_permission;
}
void OAIApplicationCommandCreateRequest::setDmPermission(const bool &dm_permission) {
    m_dm_permission = dm_permission;
    m_dm_permission_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_dm_permission_Set() const{
    return m_dm_permission_isSet;
}

bool OAIApplicationCommandCreateRequest::is_dm_permission_Valid() const{
    return m_dm_permission_isValid;
}

QSet<qint32> OAIApplicationCommandCreateRequest::getContexts() const {
    return m_contexts;
}
void OAIApplicationCommandCreateRequest::setContexts(const QSet<qint32> &contexts) {
    m_contexts = contexts;
    m_contexts_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_contexts_Set() const{
    return m_contexts_isSet;
}

bool OAIApplicationCommandCreateRequest::is_contexts_Valid() const{
    return m_contexts_isValid;
}

QSet<qint32> OAIApplicationCommandCreateRequest::getIntegrationTypes() const {
    return m_integration_types;
}
void OAIApplicationCommandCreateRequest::setIntegrationTypes(const QSet<qint32> &integration_types) {
    m_integration_types = integration_types;
    m_integration_types_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_integration_types_Set() const{
    return m_integration_types_isSet;
}

bool OAIApplicationCommandCreateRequest::is_integration_types_Valid() const{
    return m_integration_types_isValid;
}

qint32 OAIApplicationCommandCreateRequest::getHandler() const {
    return m_handler;
}
void OAIApplicationCommandCreateRequest::setHandler(const qint32 &handler) {
    m_handler = handler;
    m_handler_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_handler_Set() const{
    return m_handler_isSet;
}

bool OAIApplicationCommandCreateRequest::is_handler_Valid() const{
    return m_handler_isValid;
}

qint32 OAIApplicationCommandCreateRequest::getType() const {
    return m_type;
}
void OAIApplicationCommandCreateRequest::setType(const qint32 &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIApplicationCommandCreateRequest::is_type_Set() const{
    return m_type_isSet;
}

bool OAIApplicationCommandCreateRequest::is_type_Valid() const{
    return m_type_isValid;
}

bool OAIApplicationCommandCreateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_localizations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_options.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_member_permissions_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dm_permission_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_contexts.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_integration_types.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_handler_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApplicationCommandCreateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && true;
}

} // namespace dc_rest
