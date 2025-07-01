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

#include "OAIMessageEmbedVideoResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIMessageEmbedVideoResponse::OAIMessageEmbedVideoResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessageEmbedVideoResponse::OAIMessageEmbedVideoResponse() {
    this->initializeModel();
}

OAIMessageEmbedVideoResponse::~OAIMessageEmbedVideoResponse() {}

void OAIMessageEmbedVideoResponse::initializeModel() {

    m_url_isSet = false;
    m_url_isValid = false;

    m_proxy_url_isSet = false;
    m_proxy_url_isValid = false;

    m_width_isSet = false;
    m_width_isValid = false;

    m_height_isSet = false;
    m_height_isValid = false;

    m_content_type_isSet = false;
    m_content_type_isValid = false;

    m_placeholder_isSet = false;
    m_placeholder_isValid = false;

    m_placeholder_version_isSet = false;
    m_placeholder_version_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;
}

void OAIMessageEmbedVideoResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessageEmbedVideoResponse::fromJsonObject(QJsonObject json) {

    m_url_isValid = ::dc_rest::fromJsonValue(m_url, json[QString("url")]);
    m_url_isSet = !json[QString("url")].isNull() && m_url_isValid;

    m_proxy_url_isValid = ::dc_rest::fromJsonValue(m_proxy_url, json[QString("proxy_url")]);
    m_proxy_url_isSet = !json[QString("proxy_url")].isNull() && m_proxy_url_isValid;

    m_width_isValid = ::dc_rest::fromJsonValue(m_width, json[QString("width")]);
    m_width_isSet = !json[QString("width")].isNull() && m_width_isValid;

    m_height_isValid = ::dc_rest::fromJsonValue(m_height, json[QString("height")]);
    m_height_isSet = !json[QString("height")].isNull() && m_height_isValid;

    m_content_type_isValid = ::dc_rest::fromJsonValue(m_content_type, json[QString("content_type")]);
    m_content_type_isSet = !json[QString("content_type")].isNull() && m_content_type_isValid;

    m_placeholder_isValid = ::dc_rest::fromJsonValue(m_placeholder, json[QString("placeholder")]);
    m_placeholder_isSet = !json[QString("placeholder")].isNull() && m_placeholder_isValid;

    m_placeholder_version_isValid = ::dc_rest::fromJsonValue(m_placeholder_version, json[QString("placeholder_version")]);
    m_placeholder_version_isSet = !json[QString("placeholder_version")].isNull() && m_placeholder_version_isValid;

    m_description_isValid = ::dc_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;
}

QString OAIMessageEmbedVideoResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessageEmbedVideoResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_url_isSet) {
        obj.insert(QString("url"), ::dc_rest::toJsonValue(m_url));
    }
    if (m_proxy_url_isSet) {
        obj.insert(QString("proxy_url"), ::dc_rest::toJsonValue(m_proxy_url));
    }
    if (m_width_isSet) {
        obj.insert(QString("width"), ::dc_rest::toJsonValue(m_width));
    }
    if (m_height_isSet) {
        obj.insert(QString("height"), ::dc_rest::toJsonValue(m_height));
    }
    if (m_content_type_isSet) {
        obj.insert(QString("content_type"), ::dc_rest::toJsonValue(m_content_type));
    }
    if (m_placeholder_isSet) {
        obj.insert(QString("placeholder"), ::dc_rest::toJsonValue(m_placeholder));
    }
    if (m_placeholder_version_isSet) {
        obj.insert(QString("placeholder_version"), ::dc_rest::toJsonValue(m_placeholder_version));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::dc_rest::toJsonValue(m_description));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    return obj;
}

QString OAIMessageEmbedVideoResponse::getUrl() const {
    return m_url;
}
void OAIMessageEmbedVideoResponse::setUrl(const QString &url) {
    m_url = url;
    m_url_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_url_Set() const{
    return m_url_isSet;
}

bool OAIMessageEmbedVideoResponse::is_url_Valid() const{
    return m_url_isValid;
}

QString OAIMessageEmbedVideoResponse::getProxyUrl() const {
    return m_proxy_url;
}
void OAIMessageEmbedVideoResponse::setProxyUrl(const QString &proxy_url) {
    m_proxy_url = proxy_url;
    m_proxy_url_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_proxy_url_Set() const{
    return m_proxy_url_isSet;
}

bool OAIMessageEmbedVideoResponse::is_proxy_url_Valid() const{
    return m_proxy_url_isValid;
}

qint64 OAIMessageEmbedVideoResponse::getWidth() const {
    return m_width;
}
void OAIMessageEmbedVideoResponse::setWidth(const qint64 &width) {
    m_width = width;
    m_width_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_width_Set() const{
    return m_width_isSet;
}

bool OAIMessageEmbedVideoResponse::is_width_Valid() const{
    return m_width_isValid;
}

qint64 OAIMessageEmbedVideoResponse::getHeight() const {
    return m_height;
}
void OAIMessageEmbedVideoResponse::setHeight(const qint64 &height) {
    m_height = height;
    m_height_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_height_Set() const{
    return m_height_isSet;
}

bool OAIMessageEmbedVideoResponse::is_height_Valid() const{
    return m_height_isValid;
}

QString OAIMessageEmbedVideoResponse::getContentType() const {
    return m_content_type;
}
void OAIMessageEmbedVideoResponse::setContentType(const QString &content_type) {
    m_content_type = content_type;
    m_content_type_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_content_type_Set() const{
    return m_content_type_isSet;
}

bool OAIMessageEmbedVideoResponse::is_content_type_Valid() const{
    return m_content_type_isValid;
}

QString OAIMessageEmbedVideoResponse::getPlaceholder() const {
    return m_placeholder;
}
void OAIMessageEmbedVideoResponse::setPlaceholder(const QString &placeholder) {
    m_placeholder = placeholder;
    m_placeholder_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_placeholder_Set() const{
    return m_placeholder_isSet;
}

bool OAIMessageEmbedVideoResponse::is_placeholder_Valid() const{
    return m_placeholder_isValid;
}

qint64 OAIMessageEmbedVideoResponse::getPlaceholderVersion() const {
    return m_placeholder_version;
}
void OAIMessageEmbedVideoResponse::setPlaceholderVersion(const qint64 &placeholder_version) {
    m_placeholder_version = placeholder_version;
    m_placeholder_version_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_placeholder_version_Set() const{
    return m_placeholder_version_isSet;
}

bool OAIMessageEmbedVideoResponse::is_placeholder_version_Valid() const{
    return m_placeholder_version_isValid;
}

QString OAIMessageEmbedVideoResponse::getDescription() const {
    return m_description;
}
void OAIMessageEmbedVideoResponse::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_description_Set() const{
    return m_description_isSet;
}

bool OAIMessageEmbedVideoResponse::is_description_Valid() const{
    return m_description_isValid;
}

qint64 OAIMessageEmbedVideoResponse::getFlags() const {
    return m_flags;
}
void OAIMessageEmbedVideoResponse::setFlags(const qint64 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIMessageEmbedVideoResponse::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIMessageEmbedVideoResponse::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIMessageEmbedVideoResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_proxy_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_content_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_placeholder_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_placeholder_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessageEmbedVideoResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
